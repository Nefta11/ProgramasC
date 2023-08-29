#include<windows.h>//funcion que contiene las declaraciones de todas las funciones de la biblioteca Windows.
using namespace std;//Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.

void gotoxy(int x, int y)//void hace que nuestra funcion gotoxy NO RETORNE ningún valor al terminar su ejecución.
{
HANDLE hcon;
hcon= GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos; //En todas estas lineas de codigo que abarcan las llaves, se realizan las configuraciones para que nuestra funcion gotoxy sea creada y se ejecute bien cuando llamemos a la misma funcion.
dwPos.X=x;
dwPos.Y=y;
SetConsoleCursorPosition(hcon,dwPos);
}
 #include<iostream> // Libreria estandar de c++.
int main() //punto de partida para la ejecución del programa.

{
string nomcli,plac,fecha; //Datos de cadena de texto, en estas variables se almacenaran los datos que agrege el usuario como fecha, nombre de cliente y placas..
int horae,mine,horas,mins,total,minst,horast,hora=60,sumtmin; //Datos de numeros enteros, ahi se guardaran los numeros y cantidades que agrege el usuario como, horas, minutos,etc.
float totalp; // se declara datos de numeros flotantes (decimales) Total.
char puntos; //se declara datos char, caracter pequeño.
system ("color 94"); // Línea de código que permite el cambio de color en las letras y fondo de pantalla (Color blanco brillante y rojo) a la hora de impresión de pantalla.
gotoxy(2,2);cout<<"\n||||||||||||||||||>>>ESTE PROGRAMA SE ENCARA DE REALIZAR EL TIKECT DE PAGO DE UN ESTACIONAMIENTO<<<|||||||||||||||||||"; // Muestra de que se trata el programa a nuestro usuario utilizando la funcion gotoxy para la posicion de texto en pantalla.
cout<<"\n\nEL COSTO DE NUESTRO SERVICIO POR TIEMPO ES EL SIGUIENTE:"; 
cout<<"\n\n*COSTO POR 1 HORA $25 pesos"; //Se muestra en pantalla al usuario los costos de servivio del estacionamiento en estas lineas de codigo.
cout<<"\n*DESPUES DE 15 MINUTOS SE COBRA $25 pesos";
cout<<"\n*SI, SE CONSUMEN MAS DE 10 HORAS SE HACE UN DESCUENTE DEL 10%";
	
cout<<"\n\n+INTRODUCE TU NOMBRE:";//linea de codigo que  muestra mensaje a usuario para que introduzaca su nombre.
getline(cin,nomcli); //funcion que permite agregar todo el texto que el usuario escriba y guardarlo.
cout<<"INTRODUCE LA FECHA:"; //linea de codigo que  muestra mensaje a usuario para que introduzaca la fecha.
getline(cin,fecha); //funcion que permite agregar todo el texto que el usuario escriba y guardarlo.
cout<<"==DIGITA LAS PLACAS DE TU AUTO AQUI==:"; //linea de codigo que  muestra mensaje a usuario para que introduzaca sus placas.
getline(cin,plac);//funcion que permite agregar todo el texto que el usuario escriba y guardarlo.
	
cout<<"\nTU HORA DE ENTRADA EN FORMATO 24HRS FUE:"; //linea de codigo que  muestra mensaje a usuario para que introduzaca su hora de entrada.
cin>>horae>>puntos>>mine; // En esta linea de codigo se guarda en la variable el dato que agrego el usuario.
cout<<"SU HORA DE ENTRADA ES:"<<horae<<puntos<<mine; // se imprime en pantalla la hora de salida del cliente llamando a las variables donde se almacenaba la informacion.
	
cout<<"\n\nTU HORA DE SALIDA EN FORMATO 24HRS FUE:";//linea de codigo que  muestra mensaje a usuario para que introduzaca su hora de salida.
cin>>horas>>puntos>>mins; // En esta linea de codigo se guarda en la variable el dato que agrego el usuario.
cout<<"SU HORA DE SALIDA ES:"<<horas<<puntos<<mins; //concatenamamos para las horas, minutos y los puntos aparezcan juntos.
     
   
if (mine==mins) //DECLARACION DE MIS CONDICIONALES// 1 Si minutos de entrada son iguales a minutos de salida.
{
horast=horas-horae; //entonces hora estacionada es igual a: horas salida - horas entrada.
cout<<"\nTU TIEMPO EN HORAS EN EL ESTACIONAMIENTO ES:"<<horast; //si la condicional se cumple entonces se muestra horas estacionado del cliente.
}
else if (horae==horas) //2 (si las horas de entrada y salida son iguales
{
minst=mins-mine; //entonces minutos es igual a:minutos de salida - minutos de entrada)
cout<<"\nTU TIEMPO EN MINUTOS EN EL ESTACIONAMIENTO ES:"<<minst; //si la condicional se cumple entonces se muestra minutos estacionado del cliente.
}
	
else if (horae!=horas && mine!=mins) //3 Si las horas de entrada son diferentes a hora salida y minutos entrada son diferentes a minutos salida.
{
horast=(horas-horae);// entonces:--hora estacionado es igual a hora salida menos hora entrada.
horast=(horast-1)*60;//se aplican operaciones de coversion de tiempo, hora estacionado es igual a: hora estacionada menos uno por 60 (tiempo al que equivale una hora)
mine=60-mine;  //minutos de entrada son igual a 60 menos los mismos minutos de entrada.
horast=(horast+mine+mins)/hora; //hora estacionado es igual a hora estacionado + minutos entrada + minutos salida entre las hora( que quivalen a 60)
sumtmin=(horast/60)+(mine+mins);// suma de tiempo en minutos es igual a : (horas estacionado entre 60) mas (minutos de entrada mas minutos de salida)
 
if (sumtmin>=60)//si la suma de tiempo en minutos es mayor o igual a 60,
{
horast=(sumtmin/60)+horast;//entonces: hora estacionado es igual a (suma tiempo minutos entre 60) mas hora estacionado.
}
cout<<"\nSU TIEMPO EN ESTE ESTACIONAMIENTO FUE DE :"<<horast<<puntos<<sumtmin; //se muestra en pantalla el tiempo estacionado del cliente.
}
totalp=horast*25;

if (sumtmin>15) //condicional si suma total de minutos es menor que 15.
{totalp=totalp+25;} // entonces se ejecuta bloque de instrucciones.
    
if (horast>10) //si horas total es menor que 10
{totalp=totalp/2; } // entonces se ejecuta bloque de instrucciones.
    
cout<<"\nTOTAL:"<<totalp; //Se imprime en pantalla texto total a pagar.
    
system("PAUSE");//esta linea de codigo mantinene la terminal abierta asta que el usuario precione alguna tecla.
system("cls"); // esta line de codigo limpia consola de todo texto previo.

system("color f0 ");//Funcion para cambiar color de letra y fondo de pantalla de ejecucion de programa.
    
gotoxy(1,2);cout<<"==============================TIKECT DE ESTACIONAMIENTO==============================";
gotoxy(2,3);cout<<"\n**********NOMBRE DEL CLIENTE:"<<nomcli; //En estas ultimas lineas de codigo solo se imprime toda la informacion ya recabada y procesada para imprimirla en forma de tickect en pantalla para nuestro cliente.
gotoxy(3,4);cout<<"\n**********FECHA:"<<fecha;
gotoxy(4,5);cout<<"\n**********PLACAS DE TU AUTOMOVIL:"<<plac;
gotoxy(5,6);cout<<"\n**********HORA EN LA QUE ENTRASTE:"<<horae<<puntos<<mine;
gotoxy(6,7);cout<<"\n**********HORA EN LA QUE SALISTE DEL ESTACIONAMIENTO:"<<horas<<puntos<<mins;
gotoxy(7,8);cout<<"\n**********TIEMPO QUE UTILIZO EL SERVICIO DE ESTACIONAMIENTO:"<<horast<<puntos<<sumtmin;
gotoxy(8,9);cout<<"\n**********TOTAL A PAGAR:"<<totalp;
gotoxy(9,10);cout<<"\n\n--------------------MUCHAS GRACIAS POR SU PREFENCIA VUELVA PRONTO--------------------";
     
return 0; // finalizacion de programa
}