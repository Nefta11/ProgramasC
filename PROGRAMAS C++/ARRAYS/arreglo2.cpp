#include <iostream>// Libreria estandar de c++.
using namespace std;///Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.
int main ()//punto de partida para la ejecución del programa.

{
int productos [5]={9,4,8,88,4};//Se declara tipo de dato int(Numero entero) el arreglo se llama productos y tiene una capacad de 5 <<<este es un arreglo la sintaxis es: tipo_de_dato nombre_del_vector[tamanio];
int suma=0;// se declara dato entero con la variable suma=0
system ("color 3");//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
cout<<"*****ESTE PROGRAMA SUMA LOS VALORES DE UN VECTOR******";// Muestra mensaje donde dice de que se trata el programa a nuestro usuario.

for (int i=0; i<5; i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
suma=suma+productos[i];//En esta linea de codigo se realiza la operacion aritmetica suma donde se suman todos los elementos que estan dentro del arreglo.
}
cout<<"\n\n  La suma es :";// se imprima en pantalla el total de la suma del arreglo productos.
cout<<suma;//se llama al resultado de suma para que aparezca en pantalla.
return 0;	//Finalizacion de programa
}