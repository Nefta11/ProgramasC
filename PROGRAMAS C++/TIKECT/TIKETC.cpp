#include<windows.h> //funcion que contiene las declaraciones de todas las funciones de la biblioteca Windows.
using namespace std; //Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.

void gotoxy(int x, int y) //void hace que nuestra funcion gotoxy NO RETORNE ningún valor al terminar su ejecución.
{
	
	HANDLE hcon;
	hcon= GetStdHandle(STD_OUTPUT_HANDLE); //En todas estas lineas de codigo que abarcan las llaves, se realizan las configuraciones para que nuestra funcion gotoxy sea creada y se ejecute bien cuando llamemos a la misma funcion.
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}


#include <iostream> // Libreria estandar de c++.
int main() //punto de partida para la ejecución del programa.

{
	system("color 74"); //Línea de código que permite el cambio de color en las letras y fondo de pantalla (Color blanco brillante y rojo) a la hora de impresión de pantalla.
	string nomc,nomcli,fech,prod1,prod2,prod3; //Datos de cadena de texto, en estas variables se almacenaran los datos que agrege el usuario.
	int cp1,cp2,cp3,pp1,pp2,pp3,sbtp1,sbtp2,sbtp3,tdc,pdc,camb; //Datos de numeros enteros, ahi se guardaran los numeros y cantidades que agrege el usuario.

	cout<<"***ESTE PROGRAMA REALIZA LA IMPRESION DE SU TICKET DE COMPRA***\n\n"; // Muestra de que se trata el programa a nuestro usuario.
	cout<<"INTRODUZCA EL NOMBRE DE SU CAJERO:\n"; //linea de codigo que  muestra mensaje a usuario para que introduzaca nombre de cajero.
	getline(cin,nomc); //funcion que permite agregar todo el texto que el usuario escriba y guardarlo.
	cout<<"\nINTRODUZCA SU NOMBRE:\n"; //linea de codigo que  muestra mensaje a usuario para que introduzaca su nombre.
	getline(cin,nomcli); //funcion que permite agregar todo el texto que el usuario escriba y guardarlo.
	cout<<"\nINTRODUZCA LA FECHA DE SU COMPRA:\n"; //linea de codigo que  muestra mensaje a usuario para que introduzaca la fecha de su compra.
	getline(cin,fech); //función que nos permite obtener múltiples caracteres de la entrada de un usuario.
	system("cls");//limpia la pantalla.
	
	cout<<"INTRODUCE EL NOMBRE DEL PRODUCTO 1 QUE DESEAS COMPRAR:\n";//linea de codigo que  muestra mensaje a usuario para que introduzaca  el nombre de su producto 1.
	cin>>prod1; // En esta linea de codigo se guarda en la variable el dato (string) que agrego el usuario.
	cout<<"INTRODUCE LA CANTIDAD DE PRODUCTO UNO QUE COMPRARA:\n"; //linea de codigo que  muestra mensaje a usuario para que introduzaca la cantidad de producto 1 que comprara.
	cin>>cp1; // En esta linea de codigo se guarda en la variable el dato que agrego el usuario.
	cout<<"PRECIO UNITARIO DEL PRODUCTO 1:\n"; //linea de codigo que  muestra mensaje a usuario para que introduzaca el precio de su producto 1.
	cin>>pp1; // En esta linea de codigo se guarda en la variable el dato precio que agrego el usuario.
	sbtp1=cp1*pp1; // Aqui se realiza la operacion aritmetica donde se multiplica la cantidad de productos 1 por el precio unitario del mismo y el resultado es el subtotal del producto 1.
    cout<<"EL SUBTOTAL DEL PRODUCTO 1 ES:\n"<<sbtp1; // Se le muestra en pantalla el subtotal del producto 1 a nuestro usuario.
    
	cout<<"\n\n\nINTRODUCE EL NOMBRE DEL PRODUCTO 2 QUE DESEAS COMPRAR:\n"; //linea de codigo que  muestra mensaje a usuario para que introduzaca  el nombre de su producto 2.
	cin>>prod2; // En esta linea de codigo se guarda en la variable el dato (string) que agrego el usuario.
	cout<<"INTRODUCE LA CANTIDAD DE PRODUCTO DOS QUE COMPRARA:\n"; //linea de codigo que  muestra mensaje a usuario para que introduzaca la cantidad de producto 2 que comprara.
	cin>>cp2;// En esta linea de codigo se guarda en la variable el dato (int) que agrego el usuario.
	cout<<"PRECIO UNITARIO DEL PRODUCTO 2:\n";//linea de codigo que  muestra mensaje a usuario para que introduzaca el precio de su producto 2.
	cin>>pp2; // En esta linea de codigo se guarda en la variable el dato (int) precio que agrego el usuario.
	sbtp2=cp2*pp2; // Aqui se realiza la operacion aritmetica donde se multiplica la cantidad de productos 2 por el precio unitario del mismo y el resultado es el subtotal del producto 2.
	cout<<"EL SUBTOTAL DEL PRODUCTO 2 ES:\n"<<sbtp2; // Se le muestra en pantalla el subtotal del producto 2 a nuestro usuario.
	
	cout<<"\n\nINTRODUCE EL NOMBRE DEL PRODUCTO 3 QUE DESEAS COMPRAR:\n";//linea de codigo que  muestra mensaje a usuario para que introduzaca  el nombre de su producto 3.
	cin>>prod3; // En esta linea de codigo se guarda en la variable el dato (string) que agrego el usuario.
	cout<<"INTRODUCE LA CANTIDAD DE PRODUCTO TRES QUE COMPRARA:\n"; //linea de codigo que  muestra mensaje a usuario para que introduzaca la cantidad de producto 3 que comprara.
	cin>>cp3; // En esta linea de codigo se guarda en la variable el dato (int) que agrego el usuario.
	cout<<"PRECIO UNITARIO DEL PRODUCTO 3:\n"; //linea de codigo que  muestra mensaje a usuario para que introduzaca el precio de su producto 3.
	cin>>pp3; // En esta linea de codigo se guarda en la variable el dato (int) precio que agrego el usuario.
	sbtp3=cp3*pp3; // Aqui se realiza la operacion aritmetica donde se multiplica la cantidad de productos 3 por el precio unitario del mismo y el resultado es el subtotal del producto 2.
	cout<<"\nEL SUBTOTAL DEL PRODUCTO 3 ES:\n"<<sbtp3; // Se le muestra en pantalla el subtotal del producto 3 a nuestro usuario.
	
    tdc=sbtp1+sbtp2+sbtp3; // Aqui se reazlia la operacion aritmetica donde sumamos el subotal del producto 1, 2, 3 para obtener el total de toda la compra.
    cout<<"\n\nEL TOTAL DE SU COMPRA ES:\n"<<tdc; // Se le muestra en pantalla el total de su compra a nuestro usuario.
	cout<<"\n\nEL CLIENTE PAGO CON:\n"; //En esta line de codigo se le pide al usuario que introduzca la cantidad con la que pago el usuario.
	cin>>pdc; //Se guarda la variable int que agrego el usuario pdc.
    camb=pdc-tdc; // linea de codigo donde se realiza una operacion aritmetica donde al pago del cliente se le resta el total de la compra y da de resultado el cambio del cliente.
	cout<<"\nSU CAMBIO ES:"<<camb; // Se le muestra en pantalla el cambio de nuestro cliente.
	system("cls");  // esta line de codigo limpia consola de todo texto previo.
	
	system("color 2f");//COLOR DE LETRA Y PANTALLA DE EJECUCION
	gotoxy(12,11);cout<<"***TICKET DE COMPRA***"; // En todas estas lineas de codigo finales se manda a llamar nuestra cuncion gotoxy previamente declarada al principio, y se les asigna a cada una
	gotoxy(13,12);cout<<"\nATENDIO EL CAJERO:"<<nomc; // un valor para que cambien su posicion a la hora de imprimir todo en pantalla.
	gotoxy(14,13);cout<<"\nNOMBRE DEL CLIENTE:" <<nomcli;
	gotoxy(15,14);cout<<"\nFECHA:" <<fech;
	gotoxy(16,15);cout<<"\n *Producto uno comprado:"<<prod1    <<" *Cantidad:"<<cp1  <<" *Precio por unidad:"<<pp1   <<" *Subtotal:"<<sbtp1;
	gotoxy(17,16);cout<<"\n *Producto dos comprado:"<<prod2    <<" *Cantidad:"<<cp2  <<" *Precio por unidad:"<<pp2   <<" *Subtotal:"<<sbtp2;
    gotoxy(18,17);cout<<"\n *Producto tres comprado:"<<prod3   <<" *Cantidad:"<<cp3   <<"*Precio por unidad:"<<pp3   <<" *Subtotal:"<<sbtp3;
    gotoxy(19,18);cout<<"\n*TOTAL DE SU COMPRA:"<<tdc;  
	gotoxy(20,19);cout<<"\n*PAGO CON:"<<pdc; // En todas estas lineas de codigo final solo se imprime los datos previamenta recabados y se muestran al usuario en forma de tikect de compra.
    gotoxy(21,20);cout<<"\n*SU CAMBIO:"<<camb;
    gotoxy(22,21);cout<<"\n\n***MUCHAS GRACIAS POR SU COMPRA, QUE TENGA UN BUEN DIA, VUELVA PRONTO***";// mensaje de despedida a nuestro cliente.
    
	system("PAUSE");//esta linea de codigo mantinene la terminal abierta asta que el usuario precione alguna tecla.
	
	return 0; //Finalizacion de nuestro programa.
}