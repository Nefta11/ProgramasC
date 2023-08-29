#include <iostream> // Libreria estandar de c++.
using namespace std; //Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.

int main() //punto de partida para la ejecución del programa.

{
int num1; //se declaran datos de numeros enteros, ahi en esa variable se guardara el numero que introduzca el usuario.

cout<<"INTRODUCE UN NUMERO:"; //linea de codigo que muestra mensaje a usuario para que introduzaca un numero.
cin>>num1; //En esta linea de codigo se guarda la variable (int) numero que agrego el usuario.

while(num1>=0) //En esta linea de codigo se utiliza el while. que sigifica que mientras se cumpla lo que esta dentro de while, entonces se ejecutaran el bloque de instrucciones o sentencias.
{
system ("COLOR A7"); //Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla
cout<<"\nEL NUMERO:"<<num1<<"  ES POSITIVO"<<endl; // Imprime el numero en pantalla que ingreos el usuario, y le da el valor positivo.

cout<<"\nINTRODUCE UN NUMERO:"; // Si se cumple que el numero es positivo se vuelve a pedir a el usuario que introduzca otro numero asi sera el siclo asta que introduzca uno que es negativo y salga del bucle.
cin>>num1;// Imprime el numero en pantalla que ingreos el usuario.
}	
cout<<"FIN DEL SICLO";//Si no se cumple la sentencia de while entonces se termina el siclo.
return 0;	// Fin del programa.
}