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
for(int i=1;i<=40;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,1);cout<<"Y";//En esta linea de codigo se empieza darle forma al rectangulo con eñ caracter y utilizando gotoxy en conjunccion con For.
}	
for(int i=2;i<=15;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(40,i);cout<<"Y";//En esta linea de codigo se empieza darle forma al rectangulo con eñ caracter y utilizando gotoxy en conjunccion con For.
}

for(int i=1;i<=15;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(1,i);cout<<"Y";//En esta linea de codigo se empieza darle forma al rectangulo con eñ caracter y utilizando gotoxy en conjunccion con For.
}
for(int i=2;i<=40;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(i,15);cout<<"Y";//En esta linea de codigo se empieza darle forma al rectangulo con eñ caracter y utilizando gotoxy en conjunccion con For.
}
for(int i=1;i<=1;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color a4"),//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
gotoxy(17,7);cout<<"NEFTALI\n\n\n\n\n\n\n\n\n";	//En esta linea de codigo ponemos el texto que ira centrado dentro del rectangulo
}	
return 0;//Finalizacion del programa.
}

