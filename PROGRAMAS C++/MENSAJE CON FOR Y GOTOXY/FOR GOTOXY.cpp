#include <iostream>// Libreria estandar de c++.
#include<windows.h>//funcion que contiene las declaraciones de todas las funciones de la biblioteca Windows.
using namespace std;//Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.

void gotoxy(int x, int y)//void hace que nuestra funcion gotoxy NO RETORNE ningún valor al terminar su ejecución.
{
	
	HANDLE hcon;
	hcon= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;//En todas estas lineas de codigo que abarcan las llaves, se realizan las configuraciones para que nuestra funcion gotoxy sea creada y se ejecute bien cuando llamemos a la misma funcion.
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}
int main()//punto de partida para la ejecución del programa.

{
for(int i=1;i<=20;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,1);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For.
}	
for(int i=2;i<=19;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,2);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For e imprimiendo en pantalla el caracter.
}
for(int i=3;i<=18;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,3);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For e imprimiendo en pantalla el caracter.	
}	
for(int i=4;i<=17;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,4);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For e imprimiendo en pantalla el caracter.
}
for(int i=5;i<=16;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,5);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For e imprimiendo en pantalla el caracter.
}
for(int i=6;i<=15;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,6);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For e imprimiendo en pantalla el caracter.
}

for(int i=7;i<=14;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,7);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For e imprimiendo en pantalla el caracter.
}

for(int i=8;i<=13;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 	
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,8);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For e imprimiendo en pantalla el caracter.
}
for(int i=9;i<=12;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,9);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For e imprimiendo en pantalla el caracter.
}
for(int i=10;i<=11;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,10);cout<<"Y";//En esta linea de codigo se empieza darle forma a la piramide invertida utilizando gotoxy en conjunccion con For e imprimiendo en pantalla el caracter.
}
return 0;//finalizacion de programa.
}