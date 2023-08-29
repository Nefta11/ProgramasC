#include <iostream> // Libreria estandar de c++.
using namespace std; //Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main() //punto de partida para la ejecución del programa.

{
int edad; //se declaran datos de numeros enteros, ahi en esa variable se guardara la edad del usuario.
system("color f2"); //Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
cout<<"============ESTE PROGRAMA DETERMINA MEDIANTE TU EDAD A QUE GRUPO PERTENCES NINO, JOVEN, ADULTO O ANCIANO==============="; //Linea de codigo que muestra en la pantalla la presentacion del programa
cout<<"\n\nINGRESA TU EDAD:"; //linea de codigo que muestra mensaje a usuario para que introduzaca la edad.
cin>>edad; //En esta linea de codigo se guarda la variable (int) la edad que agrego el usuario.
	
if(edad<=14) //Condicional if que si se cumple lo que hay dentro de esta, se ejecuta el bloque de instrucciones del entonces.
{
cout<<"\n USTED ES UN NINO"; // Bloque de instrucciones que se mostrara en pantalla si se cumple la condicion.
}
else if(edad>14,edad<=18) //Condicional if que si se cumple lo que hay dentro de esta, se ejecuta el bloque de instrucciones del entonces.
{
cout<<"\n USTED ES UN JOVEN"; // Bloque de instrucciones que se mostrara en pantalla si se cumple la condicion.
}
else if(edad>=19,edad<60) //Condicional if que si se cumple lo que hay dentro de esta, se ejecuta el bloque de instrucciones del entonces.
{
cout<<"\n USTED UN ADULTO"; // Bloque de instrucciones que se mostrara en pantalla si se cumple la condicion.
}
else if(edad>=60) //Condicional if, significa si edad es mayor o igual a 60.
{
cout<<"\n USTED ES UN ANCIANO"; // Bloque de instrucciones que se mostrara en pantalla si se cumple la condicion.
}

return 0;	//Finalizacion de programa.
}