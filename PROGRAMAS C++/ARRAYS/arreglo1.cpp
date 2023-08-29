#include <iostream> // Libreria estandar de c++.
using namespace std;///Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.
int main ()//punto de partida para la ejecución del programa.

{
int numero [5]= {1,4,6,7,3};//Se declara tipo de dato int(Numero entero)<<<este es un arreglo la sintaxis es: tipo_de_dato nombre_del_vector[tamanio];
float calificaciones [4]={6.8,7.9,8.8,9.6}; //Se declara tipo de dato float (Flotante)<<<este es un arreglo la sintaxic es: tipo_de_dato nombre_del_vector[tamanio];
char vocales [5]={'a','i','o','u','u'};//Se declara tipo de dato char(Caracter)<<<este es un arreglo la sintaxic es: tipo_de_dato nombre_del_vector[tamanio];

cout<<"\n\n  ELEMENTO:";//linea de codigo que muestra en pantalla al elemento.
cout<<numero[4];//Imprima en pantalla al arreglo numero que esta en la posicion 4.

cout<<"\n\n  ELEMENTO:";//linea de codigo que muestra en pantalla al elemento.
cout<<calificaciones[2];//Imprima en pantalla al arreglo calificaciones que esta en la posicion 2.

cout<<"\n\n  ELEMENTO:";//linea de codigo que muestra en pantalla al elemento.
cout<<vocales[1];//Imprima en pantalla al arreglo voacles que esta en la posicion 1.
	
return 0;	//Finalizacion de programa.
}