#include <iostream>// Libreria estandar de c++.
using namespace std;//Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main ()//punto de partida para la ejecución del programa.
 {
int nume;//Declaramos Dato int (Numero entero) y ahi se guardara la variable del valor que introduzca el usuario.
system("color 3");//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
cout<<"*****ESTE PROGRAMA DETERMINA SI UN NUMERO ES PAR O IMPAR*****";// Muestra de que se trata el programa a nuestro usuario.
cout<<"\n\nINTRODUZCA UN NUMERO:";//linea de codigo que muestra mensaje a usuario para que introduzaca el valor del numero.
cin>>nume;//En esta linea de codigo se guarda la variable que introduce el usuario.

if (nume==0)// se utiliza condicional, si numero es igual a cero.
{
cout<<"El numero es cero";//entonces se ejecuta el bloque de instrucciones.
}

else if (nume%2==0) // sino si, el numero se divide entre 2, si el residuo de la division es cero, entonces el numero es par.
{
cout<<"------El numero es par------";//Si se cumpla la condicion se imprime mensaje en pantalla.
}

else{ cout<<"°°°°°El numero es impar°°°°°";} //sino no se cumple ninguna de las anteriores condiciones entonces el numero es impar.

return 0;//finalizacion del programa
 }