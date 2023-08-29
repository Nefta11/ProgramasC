#include <iostream>// Libreria estandar de c++.
using namespace std;//Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main ()//punto de partida para la ejecución del programa.
 
 {
float inum,n, no;//Se declara el tipo de dato float (flotante), con la variable inumm, n, no que almacenra el valor que introduzca el usuario.
char x;//Se declara el tipo de dato char (caracter).

system("color 9");//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
cout<<"\n°°°°°ESTE PROGRAMA MUESTRA LA TABLA DE MULTIPLICAR, DEPENDIENDO EL NUMERO QUE INTRODUZCA EL USUARIO°°°°°";// Muestra de que se trata el programa a nuestro usuario.
cout<<"\n\nINTROUCE EL NUMERO PARA LA TABLA DE MULTIPLICAR QUE DECEAS:";//linea de codigo que muestra mensaje a usuario para que introduzaca el valor de la tabla de multiplicar que desea.
cin>>inum;//En esta linea de codigo se guarda la variable que introduce el usuario.
cout<<"\n\nINTROUCE EL NUMERO DE DONDE QUIERES QUE INICIE TU TABLA DE MULTIPLICAR:";//linea de codigo que muestra mensaje a usuario para que introduzaca el valor de donde quiere que inicie su tabla de multiplicar.
cin>>n;//En esta linea de codigo se guarda la variable que introduce el usuario.
cout<<"\n\nINTROUCE EL NUMERO ASTA DONDE QUIERES QUE LLEGUE TU TABLA DE MULTIPLICAR:";//linea de codigo que muestra mensaje a usuario para que introduzaca el valor de donde quiere que finalice su tabla de multiplicar.
cin>>no;//En esta linea de codigo se guarda la variable que introduce el usuario.

cout<<"\n\ntabla de multiplicar  "<<inum;// Linea de codigo que mostrara a usuario la tabla de multiplicar que se mostrara.
while (n<=no)//se utiliza wl while, mientras numero de inicio de tabla sea menor o igual a numero de final de tabla.
{//Entonces se ejecutara bloque de instrucciones.
cout<<"\n\n"<<inum<<"X"<<n<<"="<<inum*n;//linea de codigo que mostrara en pantalla la operacion aritmetica tabla de multiplicar ya realizada.
n=n+1;//linea de codio donde el numero de inicio de la tabla de multiplicar se ira aumentando gradualmente 1 a 1.
} 	
return 0;	//finalizacion de programa 
}