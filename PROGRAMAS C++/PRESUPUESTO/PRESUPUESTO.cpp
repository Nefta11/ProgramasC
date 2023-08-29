#include <iostream> // Libreria estandar de c++.
using namespace std;//Esta función nos permite evitar poner std en cada línea de codigo, ya que esto abarca todo.
int main()//punto de partida para la ejecución del programa.

{
float presu,sumart,prod,art=1,gasta; //Se declara el tipo de dato float (flotante), con las variables que almacenran los valores que introduzca el usuario.

system("color f4");//Línea de código que permite el cambio de color en las letras y fondo a la hora de impresión de pantalla.
cout<<"-------ESTE PROGRAMA REALIZA LA SUMA DE TUS PRODUCTOS A COMPRAR DEPENDIENDO DEL PRESUPUESTO QUE USTED TENGA----------";// Muestra de que se trata el programa a nuestro usuario.
cout<<"\n\nINTRODUZCA LA CANTIDAD QUE TIENE PRESUPUPUESTADA A GASTAR:"; //linea de codigo que muestra mensaje a usuario para que introduzaca el valor de la tabla de su presupuesto.
cin>>presu;//En esta linea de codigo se guarda la variable que introduce el usuario.
cout<<"\n\n**********Presupuesto a gastar:"<<"$"<<presu<<"**************";//Se muestra en pantalla el presupuesto a gastar por el usuario.

while (presu>0)//mientras presupuesto sea menor que 0.
{
cout<<"\n\nINTRODUZCA EL PRECIO DE SU PRODUCTO:"<<"$";// se muestra en pantalla mensaje que indica a usuario que introduzca el valor de sus articulos que comprara.
cin>>prod;//En esta linea de codigo se guarda la variable que introduce el usuario.

cout<<"ARTICULO:"<<art<<"="<<"$"<<prod;//linea de codigo que muestra en pantalla el numero de articulo  del cliente y su precio.
art ++;//linea de codio donde el numero de inicio del articulo se ira aumentando gradualmente 1 a 1.

presu=presu-prod;//operacion aritmetica donde a el presupuesto se le resta el precio del producto para mostrar lo que resta de presupuesto.
cout<<"\n\n----------------TU RESTANTE DE PRESUPUESTO ES:"<<"$"<<presu;//se muestra mensaje en pantalla de lo que resta de presupuesto.
gasta=prod+gasta;//se hace la suma de los productos.
}
cout<<"\n\n----------------DE TU PRESUPUESTO GASTASTE:"<<"$"<<gasta;//mensaje en pantalla donde se muestra lo que el usuario gatos de su presupuesto.
cout<<"\n\n°°°°°°°°°°°°°°°°°°°°Sobrepaso su presupuesto°°°°°°°°°°°°°°°°°°°°";//Linea de codigo que se muestra cuando se sobrepaso el presupuesto.
	
return 0;	//finalizacion de programa.
}