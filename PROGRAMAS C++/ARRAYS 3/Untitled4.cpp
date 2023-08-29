#include <iostream> // Libreria estandar de c++
using namespace std; ///Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.
int main() //punto de partida para la ejecución del programa.

{
	
int elemento,f=0; //DECLARAMOS NUESTROS VARIABLE INT (NUMERO ENTERO)Y DEFINICION DE VARIABLES.
int numero[100],i; // SE DEFINE EL ARREGLO NUMERO Y SU TAMAÑO QUE CONTIENE 
{
system("color 3"); // DEFINIMOS EL COLOR A UTILIZAR DE LAS LETRAS EN LA PANTALLA
cout<<"\n\n INTRODUCE LA CANTIDAD DE ELEMENTOS:"; // SE LE PIDE AL USUARIO QUE INGRESE LA CANTIDAD DE ELEMENTOS QUE UTILIZARA.
cin>>elemento; // GUARDA EL VALOR DE LA CANTIDAD DE ELEMENETOS QUE INGRESO USUARIO.

for(int i=0;i<elemento;i++) // UTILIZAMOS LA FUNCION FOR (I=0 PARA QUE EL CONTEO INICIE DESDE 0), EL VALOR DEL ELEMENTO VA AUMENTANTO CON i++(asignar posiscion). 
{
cout<<"\n INTRODUCE EL VALOR DEL ELEMENTO:"<<i<<"  :";//SE LE PIDE AL USUARIO QUE INTRODUZCA EL VALOR DEL ELEMTO.
cin>>numero[i];// GUARDA EL VALOR DEL NUMERO.
		
if (numero[i]>f)//COMPARACION DE VARIABLES PARA SABER CUAL ES LA MAYOR DE TODAS.
{
f=numero[i];//SE GUARDA EL RESULTADO DE LA COMPARACION.
}
}
for(int i=0;i<elemento;i++)//ciclo for (valor de inicio, valor final y tamaño de paso) 
{
cout<<"\n ELEMENTO "<<i<<"  :"<<numero[i]; // EN ESTA BARRA DE CODIGOS REALIZAMOS LA IMPRECION DE LOS RESULTADOS.
}
cout<<"\nEL ELEMENTO MAYOR ES: "<<f;
}
return 0; // FINALIZACION DEL PROGRAMA
}