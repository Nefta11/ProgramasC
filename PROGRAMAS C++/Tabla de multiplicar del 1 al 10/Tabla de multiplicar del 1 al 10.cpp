#include <iostream>// Libreria estandar de c++.
using namespace std;//Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main ()//punto de partida para la ejecución del programa.
 
 {
float inum,n=1;//Se declara el tipo de dato float (flotante), con la variable inumm, n, no que almacenra el valor que introduzca el usuario.
char x;//Se declara el tipo de dato char (caracter).

system("color 9");//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
cout<<"\n°°°°°ESTE PROGRAMA MUESTRA LA TABLA DE MULTIPLICAR DE NUMEROS ENTRE 1 A 10°°°°°";// Muestra de que se trata el programa a nuestro usuario.
cout<<"\n\nINTROUCE EL NUMERO PARA LA TABLA DE MULTIPLICAR QUE DECEAS:";//linea de codigo que muestra mensaje a usuario para que introduzaca el valor de la tabla de multiplicar que desea.
cin>>inum;//En esta linea de codigo se guarda la variable que introduce el usuario.

cout<<"\n\ntabla de multiplicar  "<<inum;// Linea de codigo que mostrara a usuario la tabla de multiplicar que se mostrara.
while (n<=10)//se utiliza wl while, mientras numero N sea menor o igual a 10.
{//Entonces se ejecutara bloque de instrucciones.
cout<<"\n\n"<<inum<<"X"<<n<<"="<<inum*n;//linea de codigo que mostrara en pantalla la operacion aritmetica tabla de multiplicar ya realizada.
n=n+1;//linea de codio donde el numero de inicio de la tabla de multiplicar se ira aumentando gradualmente 1 a 1.
} 	
return 0;	//finalizacion de programa 
}