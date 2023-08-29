#include <iostream> // Libreria estandar de c++.
using namespace std; //Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main ()//punto de partida para la ejecución del programa.
{
int opcio; //Datos de numeros enteros, ahi se guardaran los numeros y cantidades que agrege el usuario.
do //DO WHILE INICIO, que significa hacer todo lo que esta dentro del bloque de instrucciones.
{	
int imenu; //INICIA EL PROGRAMA DANDO LAS OPCIONES DEL MENU.
system("COLOR 4");//Línea de código que permite el cambio de color en las letras y fondo de impresión de pantalla.
cout<<"----------ESTE PROGRMA ES UN MENU COMPLETO DE MAS PROGRAMAS QUE INCLUYEN LOS SIGUIENTES----------"; //Muestra de que se trata el programa a nuestro usuario.
cout<<"\n\n1-CONVERSIONES";//Se muestra en pantalla la opcion 1-CONVERSIONES para elecion del usuario.
cout<<"\n2-AREAS";//Se muestra en pantalla la opcion 2-AREAS para elecion del usuario.
cout<<"\n3-OPERACIONES BASICAS (entre dos numeros)";//Se muestra en pantalla la opcion 3-OPERACIONES BASICAS para elecion del usuario.
cout<<"\n4-CALIFICACIONES";//Se muestra en pantalla la opcion 4-CALIFICACIONES para elecion del usuario.

cout<<"\n\nINTRODUCE EL NUMERO DE ACUERDO AL PROGRAMA QUE DECEAS ACCEDER:";//linea de codigo que muestra mensaje a usuario para que introduzaca la opcion que va elegir.
cin>>imenu;//En esta linea de codigo se guarda la variable copcion que introduce el usuario.
system("cls"); //esta line de codigo limpia consola de todo texto previo.

switch(imenu)//SWITCH PRINCIPAL PARA TODO EL MENU.
{
do //DO WHILE INICIO, que significa hacer todo lo que esta dentro del bloque de instrucciones.
{
case 1 : //CASO 1 MENU DE LAS CONVERSIONES DE METROS A KILOMETROS, PESOS A DOLARES.
char let; //se declara char (caracter) let sera nuestra variable.
cout<<"\n\n*********ELEGISTE CONVERSIONES**********";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nELIGE UNA DE LAS SIGUIENTES:";
cout<<"\n\nMETROS A KILOMETROS (A)";//Se muestra en pantalla (A) para elecion del usuario.
cout<<"\nPESOS A DOLARES (B)";//Se muestra en pantalla (B) para elecion del usuario.
cout<<"\n\nINTRODUCE LA LETRA DE ACUERDO AL PROGRAMA QUE DECEAS ACCEDER:"; //linea de codigo que muestra mensaje a usuario para que introduzaca la cantidad su eleccion.
cin>>let;//en esta linea de codigo se guarda la variable de la eleccion del usuario.

system("cls");//esta line de codigo limpia consola de todo texto previo.
system("color 7");//Línea de código que permite el cambio de color en las letras y fondo de impresión de pantalla.
switch(let) //SWITCH1 PARA LA ELECCION DE M A KM Y PESOS A DOLARES CASO A Y CASO B RESPECTIVAMENTE.
{
case'A': case 'a'://Case A,a si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
float metro,kilm;// se declara tipo de dato float (flotante ) en las variables metro y kilm.
cout<<"\n\n----------CONVERSION METROS A KILOMETROS----------"; //Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca la cantidad en metros que decea convertir a kilometros:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>metro; // En esta linea de codigo se guarda la variable que agrego el usuario.
kilm=metro/1000; //se realiza la operacion donde se divide metros entre 1000 para dar el resultado de kilometros.
cout<<"SUS METROS CONVERTIDOS A KILOMETROS SON:"<<kilm;// Muestra en pantalla el resultado de la conversion.
break;//finalizacion del case A,a.

case 'B': case 'b'://Case B,b si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
float pes,dol;// se declara tipo de dato float (flotante ) en las variables pes y dol.
cout<<"\n\n°°°°°°°°°°CONVERSION DE PESOS A DOLARES°°°°°°°°°°";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca la cantidad de pesos que decea convertir a dolares:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>pes;// En esta linea de codigo se guarda la variable que agrego el usuario.
dol=pes*0.051;//se realiza la operacion donde se multiplica pes por 0.051 para dar el resultado de dolares
cout<<"SUS PESOS CONVERTIDOS A DOLARES SON:"<<dol;// Muestra en pantalla el resultado de la conversion.
break;//finalizacion del case B,b.

default:// si el valor introducido por el usuario no es igual a ninguno de los casos anteriores por deault sera este.
cout<<"\n****INGRESO UN VALOR NO VALIDO***";// se imprime en pantalla bloque de instrucciones.
break;//finalizacion de caso.
}
cout<<"\n\n\n\nPRECIONE 0 PARA REGRESAR AL MENU CONVERCIONES Y 1 PARA SALIR AL MENU DEL PROGRAMA:";//se muestra en pantalla el mensaje para que el usuario regresa al menu principal.
cin>>opcio;//se guarda la variable para regresar a menu principal.
system("cls");//esta line de codigo limpia consola de todo texto previo.
}
while(opcio==0);//Mientras se cumpla todo lo que esta adentro.
break;//finalizacion de switch1.
do//DO WHILE INICIO, que significa hacer todo lo que esta dentro del bloque de instrucciones.
{	
case 2 : //CASO 2 MENU DE AREAS CIRCULO, CUADRADO, RECTANGULO Y TRIANGULO.
int num;// se declara tipo de dato int (entero) en la variable.
cout<<"\n\n*********ELEGISTE AREAS**********";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nELIGE UNA DE LAS SIGUIENTES:";
cout<<"\n\nAREA DE UN CIRCULO (1)";//Se muestra en pantalla (1) para elecion del usuario.
cout<<"\nAREA DE UN CUADRADO(2)";//Se muestra en pantalla (2) para elecion del usuario.
cout<<"\nAREA DE UN RECTANGULO(3)";//Se muestra en pantalla (3) para elecion del usuario.
cout<<"\nAREA DE UN TRIANGULO(4)";//Se muestra en pantalla (4) para elecion del usuario.
cout<<"\n\nINTRODUZCA EL NUMERO PARA LA ELECCION QUE USTED REQUIERA:";//linea de codigo que muestra mensaje a usuario para que introduzaca la cantidad su eleccion.
cin>>num;//en esta linea de codigo se guarda la variable de la eleccion del usuario.
system("cls");//esta line de codigo limpia consola de todo texto previo.
system("color 84");//Línea de código que permite el cambio de color en las letras y fondo de impresión de pantalla.
switch (num) //SWITCH2 PARA LA ELECION DE LA FUNCION QUE EL USUARIO REQUIERA.
{
case 1://Case 1 si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
float rad2,area;// se declara tipo de dato float (flotante ) en las variables rad2 y area.
cout<<"\n\n°°°°°°°°°°EN ESTE PROGRAMA SACARAS EL AREA DE UN CIRCULO°°°°°°°°°°";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca el radio de su circulo:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>rad2;// En esta linea de codigo se guarda la variable que agrego el usuario.
area=3.1416*(rad2*rad2);//se realiza la operacion donde se multiplica 3.1416 por (rad2*rad2) para dar el resultado de area.
cout<<"EL AREA DE SU CIRCULO ES:"<<area;// Muestra en pantalla el resultado de la operacion.
break;//finalizacion de caso.
	
case 2://Case 2 si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
int L1,L2,a;// se declara tipo de dato int (entero ) en las variables l1, l2,a.
cout<<"\n\n||||||||||ESTE PROGRAMA SACARA EL AREA DE UN CUADRADO||||||||||";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca el valor del lado uno:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>L1;// En esta linea de codigo se guarda la variable que agrego el usuario.
cout<<"\nIntroduzca el valor del lado dos:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>L2;// En esta linea de codigo se guarda la variable que agrego el usuario.
a=L1*L2;//se realiza la operacion donde se multiplica l1 por l2 para dar el resultado de a.
cout<<"EL AREA DE SU CUADRADO ES:"<<a;// Muestra en pantalla el resultado de la operacion.
break;//finalizacion de caso.
	
case 3://Case 3 si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
int b,h,ar;// se declara tipo de dato int (entero ) en las variables b,h,ar.
cout<<"\n\n~~~~~~~~~~ESTE PROGRAMA SACARA EL AREA DE UN RECTANGULO~~~~~~~~~~~";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca el valor de la base:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>b;// En esta linea de codigo se guarda la variable que agrego el usuario.
cout<<"\nIntroduzca el valor de la altura:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>h;// En esta linea de codigo se guarda la variable que agrego el usuario.
ar=b*h;//se realiza la operacion donde se multiplica b por h para dar el resultado de ar.
cout<<"EL AREA DE SU RECTANGULO ES:"<<ar;// Muestra en pantalla el resultado de la operacion.
break;//finalizacion de caso.	
		
case 4://Case 4 si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
int B,H,are;// se declara tipo de dato int (entero ) en las variables B,H,are.
cout<<"\n\n^^^^^^^^^^ESTE PROGRAMA SACARA EL AREA DE UN TRIANGULO^^^^^^^^^^^^";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca el valor de la base:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>B;// En esta linea de codigo se guarda la variable que agrego el usuario.
cout<<"\nIntroduzca el valor de la altura:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>H;// En esta linea de codigo se guarda la variable que agrego el usuario.
are=B*H/2;//se realiza la operacion donde se multiplica B por H entre 2 para dar el resultado de are.
cout<<"EL AREA DE SU RECTANGULO ES:"<<are;// Muestra en pantalla el resultado de la operacion.
break;//finalizacion de caso.	

default:// si el valor introducido por el usuario no es igual a ninguno de los casos anteriores por deault sera este.
cout<<"\n****INGRESO UN VALOR NO VALIDO***";// se imprime en pantalla bloque de instrucciones.
break;//finalizacion de caso.
}
cout<<"\n\n\n\nPRECIONE 0 PARA REGRESAR AL MENU DE AREAS Y 1 PARA SALIR AL MENU DEL PROGRAMA:";//se muestra en pantalla el mensaje para que el usuario regresa al menu principal.
cin>>opcio;//se guarda la variable para regresar a menu principal.
system("cls");	//esta line de codigo limpia consola de todo texto previo.	
}
while(opcio==0); //DO WHILE FINAL|||||||||||||||||||//Mientras se cumpla todo lo que esta adentro.
break;//finalizacion de switch2.

do//DO WHILE INICIO, que significa hacer todo lo que esta dentro del bloque de instrucciones.
{
case 3 : //CASO 3 OPERACIONES BASICAS ENTRE DOS NUMEROS
char letra;// se declara tipo de dato char (caracter) en la variable.
cout<<"\n\n**********ELEGISTE OPERACIONES BASICAS (ENTRE DOS NUMEROS)********";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\n(A) REALIZAR UNA SUMA";//Se muestra en pantalla (A) para elecion del usuario.
cout<<"\n(B) REALIZAR UNA RESTA";//Se muestra en pantalla (B) para elecion del usuario.
cout<<"\n(C) REALIZAR UNA MULTIPLICACION";//Se muestra en pantalla (C) para elecion del usuario.
cout<<"\n(D) REALIZAR UNA DIVISION";//Se muestra en pantalla (D) para elecion del usuario.
cout<<"\n\nINTRODUZCA LA LETRA DE ACUERDO AL PROGRAMA QUE DECEAS ACCEDER:";//linea de codigo que muestra mensaje a usuario para que introduzaca la cantidad su eleccion.
cin>>letra;//en esta linea de codigo se guarda la variable de la eleccion del usuario.

system("cls");//esta line de codigo limpia consola de todo texto previo.
system("color 09");//Línea de código que permite el cambio de color en las letras y fondo de impresión de pantalla.

switch(letra) //SWITCH 3 PARA MENU DE OPERACIONES CON DOS NUMEROS
{
case'A': case 'a'://Case A,a si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
int num1,num2,suma;// se declara tipo de dato int (entero) en las variables num1, num2, suma.
cout<<"\n\n^^^^^^^^^^OPERACION SUMA CON DOS NUMEROS^^^^^^^^^^";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca el primer numero:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>num1;// En esta linea de codigo se guarda la variable que agrego el usuario.
cout<<"\nIntroduzca el segundo numero:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>num2;// En esta linea de codigo se guarda la variable que agrego el usuario.
suma=num1+num2;//se realiza la operacion donde se suma num1 mas num2 para dar el resultado de suma.
cout<<"EL TOTAL DE SU SUMA ES:"<<suma;// Muestra en pantalla el resultado de la operacion.
break;//Finalizacion del caso.

case'B': case 'b'://Case B,b si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
int n1,n2,rest;// se declara tipo de dato int (entero) en las variables n1, n2, rest.
cout<<"\n\n||||||||||OPERACION RESTA CON DOS NUMEROS|||||||||||";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca el numero al que le quiere restar (Minuendo):";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>n1;// En esta linea de codigo se guarda la variable que agrego el usuario.
cout<<"\nIntroduzca el numero que decea restar (sustraendo):";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>n2;// En esta linea de codigo se guarda la variable que agrego el usuario.
rest=n1-n2;//se realiza la operacion donde se suma n1 menos n2 para dar el resultado de rest.
cout<<"EL TOTAL DE SU RESTA ES:"<<rest;	// Muestra en pantalla el resultado de la operacion.
break;//Finalizacion del caso.	

case'C': case 'c'://Case C,C si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
int m1,m2,multi;// se declara tipo de dato int (entero) en las variables m1, m2, multi.
cout<<"\n\n°°°°°°°°°°OPERACION MULTIPLICACION CON DOS NUMEROS°°°°°°°°°°";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca el primer numero:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>m1;// En esta linea de codigo se guarda la variable que agrego el usuario.
cout<<"\nIntroduzca el segundo numero:";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>m2;// En esta linea de codigo se guarda la variable que agrego el usuario.
multi=m1*m2;//se realiza la operacion donde se suma m1 por m2 para dar el resultado de multi.
cout<<"EL TOTAL DE SU MULTIPLICACION ES:"<<multi;	// Muestra en pantalla el resultado de la operacion.
break;//Finalizacion del caso

case'D': case 'd'://Case D,d si el usuario selecciona este se ejecutara el bloque de instrucciones que esta abajo.
int d1,d2,divi;// se declara tipo de dato int (entero) en las variables m1, m2, multi.
cout<<"\n\n**********OPERACION DIVISION CON DOS NUMEROS***********";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n\nIntroduzca el numero que quiere dividir (dividendo):";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>d1;// En esta linea de codigo se guarda la variable que agrego el usuario.
cout<<"\nIntroduzca el numero por el cual quiere divir la cifra anterior (divisor):";//linea de codigo que muestra mensaje a usuario para que introduzaca un valor.
cin>>d2;// En esta linea de codigo se guarda la variable que agrego el usuario.
divi=d1/d2;//se realiza la operacion donde se suma d1 entre d2 para dar el resultado de divi.
cout<<"EL TOTAL DE SU DIVISION ES:"<<divi;// Muestra en pantalla el resultado de la operacion.	
break;//Finalizacion del caso

default:// si el valor introducido por el usuario no es igual a ninguno de los casos anteriores por deault sera este.
cout<<"\n****INGRESO UN VALOR NO VALIDO***";// se imprime en pantalla bloque de instrucciones.
break;//finalizacion de caso.		
}
cout<<"\n\n\n\nPRECIONE 0 PARA REGRESAR AL MENU CONVERCIONES Y 1 PARA SALIR AL MENU DEL PROGRAMA:";//se muestra en pantalla el mensaje para que el usuario regresa al menu principal.
cin>>opcio;//se guarda la variable para regresar a menu principal.
system("cls");//esta line de codigo limpia consola de todo texto previo.
}
while(opcio==0); //DO WHILE FINAL|||||||||||||||||||//Mientras se cumpla todo lo que esta adentro.
break;//finalizacion de switch3.
do//DO WHILE INICIO, que significa hacer todo lo que esta dentro del bloque de instrucciones.
{
case 4: //CASE 4 CALIFICACIONES EXCELENTE, BUENO,REGULAR,MALO(CON COLORES)
float calif;// se declara tipo de dato float (cflotante) en la variable.
system("cls");//esta line de codigo limpia consola de todo texto previo.
system("color fa");//Línea de código que permite el cambio de color en las letras y fondo de impresión de pantalla.
cout<<"\n\n**********ELEGISTE CALIFICACIONES********";//Muestra de que se trata el sub-programa a nuestro usuario.
cout<<"\n**********ESTE PROGRAMA TE DARA UN MENSAJE DEPENDIENDO DE LA CALIFICACION QUE HAYAS OBTENIDO*********";
cout<<"\n\nEXCELENTE *10 (verde)";// MENSAJES QUE SE MOSTRARAN EN CASO DE CADA CALIFICACION.
cout<<"\nBUENO *9 (naranja)";
cout<<"\nREGULAR *8(amarillo)";
cout<<"\nMALO 7 o MENOR (rojo)";
cout<<"\n\nINTRODUZCA LA CALIFICACION QUE OBTUVO:";//linea de codigo que muestra mensaje a usuario para que introduzaca su calificacion
cin>>calif;// En esta linea de codigo se guarda la variable que agrego el usuario calif.
// SE DECLARARM COONDICIONALES CON FLOAT PARA QUE EL USUARIO PUEDA INGRESAR SU CALIFICACION CON PUSTOS DECIMAL.
if (calif==10)// linea de codigo condicional,si calificacion es igual a 10.
{
system("cls");//esta line de codigo limpia consola de todo texto previo.
system("color 20");//Línea de código que permite el cambio de color en las letras y fondo de impresión de pantalla.
cout<<"==========Su calificaion es EXCELENTE (MUY DESTACADO)===========";// MENSAJES QUE SE MOSTRARAN EN CASO DE CADA CALIFICACION.
}
if (calif<10 or calif==9 )// linea de codigo condicional.
{
system("cls");//esta line de codigo limpia consola de todo texto previo.
system("color b0");//Línea de código que permite el cambio de color en las letras y fondo de impresión de pantalla.
cout<<"----------Su calificaion es BUENA (DESTACADO)-----------";// MENSAJES QUE SE MOSTRARAN EN CASO DE CADA CALIFICACION.
}
if (calif<9 or calif==8)// linea de codigo condicional.
{
system("cls");//esta line de codigo limpia consola de todo texto previo.
system("color 60");//Línea de código que permite el cambio de color en las letras y fondo de impresión de pantalla.
cout<<"°°°°°°°°°Su calificaion es REGULAR (TRABAJA UN POCO MAS)°°°°°°°°°°";// MENSAJES QUE SE MOSTRARAN EN CASO DE CADA CALIFICACION.
}
if (calif<8)// linea de codigo condicional.
{
system("cls");//esta line de codigo limpia consola de todo texto previo.
system("color c0");//Línea de código que permite el cambio de color en las letras y fondo de impresión de pantalla.
cout<<"°°°°°°°°°°Su calificaion es mala (REPROBATORIA)°°°°°°°°°°";// MENSAJES QUE SE MOSTRARAN EN CASO DE CADA CALIFICACION.
}
cout<<"\n\n\n\nPRECIONE 0 PARA REGRESAR AL MENU CALIFICACIONES Y 1 PARA SALIR AL MENU DEL PROGRAMA:";//se muestra en pantalla el mensaje para que el usuario regresa al menu principal.
cin>>opcio;//se guarda la variable para regresar a menu principal.
system("cls");//esta line de codigo limpia consola de todo texto previo.
}		
while(opcio==0); //DO WHILE FINAL|||||||||||||||||||Mientras se cumpla todo lo que esta adentro.
break;//finalizacion de switch3.

default:// si el valor introducido por el usuario no es igual a ninguno de los casos anteriores por deault sera este.
cout<<"\n****INGRESO UN VALOR NO VALIDO***";// se imprime en pantalla bloque de instrucciones.
break;//finalizacion de caso.
}

cout<<"\n\n\n\nPRECIONE 0 PARA CONTINUAR AL MENU PRINCIPAL Y 1 PARA SALIR DEL PROGRAMA:";//se muestra en pantalla el mensaje para que el usuario regresa al menu principal.
cin>>opcio;//se guarda la variable para regresar a menu principal.
system("cls");//esta line de codigo limpia consola de todo texto previo.
}
while(opcio==0); //DO WHILE FINAL|||||||||||||||||||
cout<<"\nFIN DEL PROGRAMA";//SE MUESTRA EL EMNSAJE EN PANTALLA DE FIN.

return 0;//	Finalizacion de programa	
}
