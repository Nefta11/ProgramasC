#include <iostream> // Libreria estandar de c++.
using namespace std;//Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main ()//punto de partida para la ejecución del programa.

{
int iopcion; //Se declara el tipo de dato int (Numero entero), con la variable iopcion que almacenra el valor que introduzca el usuario.
system("color 3"); //Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
cout<<"\n--------ESTE PROGRAMA TE DA OPCIONES (MENU) DEPENDIENDO EL DIA QUE SEA PARA QUE HAGAS TU RUTINA DE EJERCICIOS---------"; // Muestra de que se trata el programa a nuestro usuario.
cout<<"\n\n1-LUNES";//Se muestra en pantalla la opcion 1 para elecion de lunes.
cout<<"\n2-MARTES"; //Se muestra en pantalla la opcion 2 para elecion de Martes.
cout<<"\n3-MIERCOLES";//Se muestra en pantalla la opcion 3 para elecion de Miercoles.
cout<<"\n4-JUEVES";//Se muestra en pantalla la opcion 4 para elecion de Jueves.
cout<<"\n5-VIERNES";//Se muestra en pantalla la opcion 5 para elecion de Viernes.
cout<<"\n6-SABADO";//Se muestra en pantalla la opcion 1 para elecion de Sabado.

cout<<"\n\nINTRODUCE EL NUMERO DE ACUERDO AL DIA QUE DECEAS ELEGIR PARA RUTINA:"; //linea de codigo que muestra mensaje a usuario para que introduzaca la opcion que va elegir.
cin>>iopcion; //En esta linea de codigo se guarda la variable opcion que introduce el usuario.
	
switch(iopcion)//sentencia switch permite ejecutar bloque de codigo entre varias alternativas. Se guarda la variable que selecionara la elecion del usuario
{
case 1: //en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n\n***ELEGISTE EL DIA LUNES***"; //si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
cout<<"\n***DEBES REALIZAR EL EJRCICIO 1 Y 2****";
break;//finalizacion del case 1.
	
case 2: //en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n\n***ELEGISTE EL DIA MARTES***";
cout<<"\n***DEBES REALIZAR EL EJRCICIO 3 Y 4****";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case 2.
		
case 3:
cout<<"\n\n***ELEGISTE EL DIA MIERCOLES***";	//en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n***DEBES REALIZAR EL EJRCICIO 5 Y 6****";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case 2.	
		
case 4:
cout<<"\n\n***ELEGISTE EL DIA JUEVES***";//en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n***DEBES REALIZAR EL EJRCICIO 7 Y 8****";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case 2.	
		
case 5:
cout<<"\n\n***ELEGISTE EL DIA VIERNES***";//en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n***DEBES REALIZAR EL EJRCICIO 9 y 10****";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case 2.
	
case 6:
cout<<"\n\n***ELEGISTE EL DIA SABADO***";//en esta linea de codigo esta la variable que se comparara dependiendo la que elija el usuario.
cout<<"\n***DEBES REALIZAR EL EJRCICIO 11 y 12****";//si esta es la que selcciono el usuario se imprimira en pantalla el bloque de instrucciones.
break;//finalizacion del case 2.
	
default:// si el valor introducido por el usuario no es igual a ninguno de los casos anteriores por deault sera este.
cout<<"\n****INGRESO UN VALOR NO VALIDO***";// se imprime en pantalla bloque de instrucciones.
break;//finalizacion de caso.
}	
return 0;//Finalizacion de programa.
}