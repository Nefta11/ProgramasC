#include <iostream>// Libreria estandar de c++.
using namespace std;//Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main()//punto de partida para la ejecución del programa.

{
    int eda;//Se declara el tipo de dato int (entero), con la variable inumm, n, no que almacenra el valor que introduzca el usuario.
    char opcion; //Se declara el tipo de dato char (caracter).
    
	do//DO WHILE INICIO, que significa hacer todo lo que esta dentro del bloque de instrucciones.
	{
    system("color a4");//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
	cout<<"***ESTE PROGRAMA TE PIDE TU EDAD Y DEPENDIENDO DE LA MISMA TE ASIGNA LA ETAPA EN LA QUE TE ENCUENTRAS***";// Muestra de que se trata el programa a nuestro usuario.
	cout<<"\n\nIntroduce tu edad:";//linea de codigo que muestra mensaje a usuario para que introduzaca el valor edad a usuario.
	cin>>eda;//En esta linea de codigo se guarda la variable que introduce el usuario.
	
		
	if (eda>=51)//se utiliza condicional, si edad es mayor o igual 51 entonces:
	{
	cout<<"Usted es un adulto mayor";// si se cumple condicional este mensaje se imprime en pantalla.
	}
	
	else if (eda>=18 and eda<=50) //se utiliza condicional, si edad es mayor o igual 18 y edad es menor o igual a 50 entonces:
	{
	cout<<"Usted es un adulto";// si se cumple condicional este mensaje se imprime en pantalla.
	}
	
	if (eda>=12 and eda<=17)  //se utiliza condicional, si edad es mayor o igual 12 y edad es menor o igual a 17 entonces:
	{
	cout<<"Usted es un joven";// si se cumple condicional este mensaje se imprime en pantalla.
	}
	
    else if (eda>=7 and eda<=11 )//se utiliza condicional, si edad es mayor o igual 7 y edad es menor o igual a 11 entonces:
	{
	cout<<"Usted es un nino";// si se cumple condicional este mensaje se imprime en pantalla.
	}

	else if (eda<=6)//se utiliza condicional, si edad es menor o igual a 6, entonces:
	{
	cout<<"Usted es un infante";	// si se cumple condicional este mensaje se imprime en pantalla.	
	}

    cout<<"\n\nPRESIONA R SI DESEA REGRESAR AL PROGRAMA O S PARA SALIR:";//se muestra en pantalla el mensaje para que el usuario regresa al menu principal.
    cin>>opcion;//se guarda y ejecuta la variable para regresar a menu principal.
    system("cls");//esta line de codigo limpia consola de todo texto previo.
	}
	while (opcion=='R'); //mientras opcion sea igual a R se mantendra en el menu

	cout<<"FIN DEL PROGRAMA";// si no se cumple while termina el programa y arroja mensaje a usuario.
	
return 0;//finalizacion de programa.
}