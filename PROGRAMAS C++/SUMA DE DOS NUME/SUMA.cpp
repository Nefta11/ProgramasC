#include <iostream> // Libreria estandar de c++.
using namespace std; //Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.

int main() //Programa principal.
{
	int n1,n2,suma; //Declaramos variables de numeros enteras, para que el usuario pueda meter el n1 y n2 y se realice la suma.
	
	cout<<"ESTE PROGRAMA REALIZA LA SUMA DE DOS NUMERO\n\n"; // se muestra en pantalla el mensaje a usuario sobre que trata el programa. 
	cout<<"INTRODUCE EL PRIMER NUMERO:"; // se muestra en pantalla el mensaje que pide al usuario introducir el primer numero.
	cin>>n1;                            // cin cuncion que permite al usuario introducir numrto y se procese.
	cout<<"INTRODUCE EL SEGUNDO NUMERO:";
	cin>>n2;
	suma=n1+n2; // en esta parte del codigo se realiza la operacion de suma de dos numero con las variables ya declaradas anteriormente.
	
	cout<<"LA SUMA ES:"<<suma; // Se muestra el resultado de la suma.
	
	return 0; // FINALIZACION DE PROGRAMA.
}
