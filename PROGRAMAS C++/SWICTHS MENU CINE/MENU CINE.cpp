#include <iostream> // Libreria estandar de c++.
using namespace std; //Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main () //punto de partida para la ejecución del programa.

{
 char copcion; //Se declara el tipo de dato char (caracter), con la variable copcion que almacenra el valor que introduzca el usuario.
system("color 3"); //Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
cout<<"\n--------ESTE PROGRAMA TE DA OPCIONES PARA QUE ELIGAS LO QUE DECES DE LA DULCERIA EN EL CINE---------"; // Muestra de que se trata el programa a nuestro usuario.
cout<<"\n\na-PALOMITAS"; //Se muestra en pantalla la opcion a para elecion de palomitas.
cout<<"\nb-REFRESCO"; //Se muestra en pantalla la opcion b para elecion de refresco.
cout<<"\nc-DULCES"; //Se muestra en pantalla la opcion c para elecion de dulce.
cout<<"\nd-AGUA"; //Se muestra en pantalla la opcion d para elecion de agua.
cout<<"\ne-NACHOS"; //Se muestra en pantalla la opcion e para elecion de nachos.
cout<<"\nf-HELADO"; //Se muestra en pantalla la opcion f para elecion de helado.
	
cout<<"\n\nINTRODUCE LA LETRA PARA ELEGIR EL ALIMENTO QUE DECEAS COMPRAR:";////linea de codigo que muestra mensaje a usuario para que introduzaca la opcion que va elegir.
cin>>copcion; //En esta linea de codigo se guarda la variable opcion que introduce el usuario.
	
switch(copcion)// sentencia switch permite ejecutar bloque de codigo entre varias alternativas. Se guarda la variable que selecionara la elecion del usuario
{
case 'a': // en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n\n***ELEGISTE PALOMITAS***"; //si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break; //finalizacion del case a.
	
case 'b':// linea de codigo que comparara la variable dependiendo la que elija el usuario.
cout<<"\n\n***ELEGISTE REFRESCO***"; // si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break; //finalizacion del case b.
		
case 'c': // linea de codigo que comparara la variable dependiendo la que elija el usuario.
cout<<"\n\n***ELEGISTE DULCES***";	// si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;	//finalizacion del case c.
		
case 'd':// linea de codigo que comparara la variable dependiendo la que elija el usuario.
cout<<"\n\n***ELEGISTE AGUA***";// si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;	//finalizacion del case d.
		
case 'e':// linea de codigo que comparara la variable dependiendo la que elija el usuario.
cout<<"\n\n***ELEGISTE NACHOS***";// si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break; //finalizacion del case e.
	
case 'f':// linea de codigo que comparara la variable dependiendo la que elija el usuario.
cout<<"\n\n***ELEGISTE HELADO***";	// si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case f.
	
default: // si el valor introducido por el usuario no es igual a ninguno de los casos anteriores por deault sera este.
cout<<"\n****INGRESO UN VALOR NO VALIDO***";// se imprime en pantalla bloque de instrucciones.
break;//finalizacion de caso.
}
	
return 0;//Finalizacion de programa.
}