#include <iostream> // Libreria estandar de c++.
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
int main() //punto de partida para la ejecución del programa.
{


for(int i=1;i<=10;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
system("color 4");
gotoxy(20,i);cout<<"HOLA MUNDO"; //En esta linea de codigo se mnada a llamar a nuestra funcion creada gotoxy, y se coloca un numero N en la posiscion X and Y para que el texto colocado en cout aparezaca en una posicion, como si fuera un plano carteciano.	
}

return 0; //Finalizacion de nuestro programa.
}