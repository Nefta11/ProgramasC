#include <iostream> // Libreria estandar de c++.
using namespace std; //Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main ()//punto de partida para la ejecución del programa.

{
char copcion; //Se declara el tipo de dato int (Numero entero), con la variable iopcion que almacenra el valor que introduzca el usuario.
system ("color 4"); //Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
cout<<"********ESTE PROGRAMA TE ENVIA UN MENSAJE DEPENDIENDO DE LA NOTA QUE HAYAS SACADO EN TU EXAMEN FINAL**********"; // Muestra de que se trata el programa a nuestro usuario.
cout<<"\n\nA-a";//Se muestra en pantalla la opcion A-A para elecion de la nota del usuario.
cout<<"\nB-b";//Se muestra en pantalla la opcion B-b para elecion de la nota del usuario.
cout<<"\nC-c";//Se muestra en pantalla la opcion C-c para elecion de la nota del usuario.
cout<<"\nD-d";//Se muestra en pantalla la opcion D-d para elecion de la nota del usuario.
cout<<"\nE-e";//Se muestra en pantalla la opcion E-e para elecion de la nota del usuario.
cout<<"\nF-f";//Se muestra en pantalla la opcion F-f para elecion de la nota del usuario.
	
cout<<"\n\nINTRODUCE LA LETRA QUE TIENES EN TU EXAMEN FINAL:";//linea de codigo que muestra mensaje a usuario para que introduzaca la opcion que va elegir.
cin>>copcion;//En esta linea de codigo se guarda la variable copcion que introduce el usuario.
	
switch(copcion)//sentencia switch permite ejecutar bloque de codigo entre varias alternativas. Se guarda la variable que selecionara el usuario para su comparacion.
{
case 'A': case 'a': //en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n\n***Excelente, Aprobado con honores***";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case A,a.
	
case 'B': case 'b'://en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n\n***Aprobado de forma sobresaliente***";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case B,b.
		
case 'C': case 'c'://en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n\n***Aprobado con buen desempeno***";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case C,c.
		
case 'D': case 'd'://en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n\n***Aprobado de manera regular***";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case D,d.
		
case 'E': case 'e'://en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n\n***Aprobado, pero se suguiere mejorar***";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case E,e.
	
case 'F': case 'f'://en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n\n***Reprobado con rendimiento pobre***";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case F,f.
	
default:// si el valor introducido por el usuario no es igual a ninguno de los casos anteriores por deault sera este.
cout<<"\n****INGRESO UN VALOR NO VALIDO***";// se imprime en pantalla bloque de instrucciones.
break;//finalizacion de caso.
	}	
return 0;	//finalizacion de programa.
}