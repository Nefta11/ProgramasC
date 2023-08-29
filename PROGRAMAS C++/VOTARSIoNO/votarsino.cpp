#include <iostream> // Libreria estandar de c++.
using namespace std; //Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main() //punto de partida para la ejecución del programa.
{
int edada; //se declaran datos de numeros enteros, ahi en esa variable se guardara la edad del usuario.
system("color b2"); //Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.

cout<<"PROGRAMA QUE DETERMINA SI UN ALUMNO PUEDE VOTAR SI O NO\n"; // Muestra de que se trata el programa a nuestro usuario.
cout<<"INTRODUCE LA EDAD DEL ALUMNO:"; //linea de codigo que muestra mensaje a usuario para que introduzaca la edad del alumno.
cin>>edada; //En esta linea de codigo se guarda la variable (int) el dato que agrego el usuario.

if (edada>=18)//Condicional if, significa si edad de alumno es igual o mayor a 18.
{
cout<<"\n***EL ALUMNO SI PUEDE VOTAR*****"; //Entonces, se ejecuta bloque de instrucciones.
}	
else//si no se cumpre 
{
	cout<<"\n\nEL ALUMNO NO PUEDE VOTAR";//Entonces, se ejecuta bloque de instrucciones.
}
	
return 0;	//Finalizacion de programa.
}
