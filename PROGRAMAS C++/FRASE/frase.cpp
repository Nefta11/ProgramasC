#include <iostream> // Libreria estandar de c++.
using namespace std;//Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.
int main()//Programa principal.

{
string frase; // En esta linea de codigo se declara el tipo de dato string (cadena de texto), nuestra variable es frase donde se almacenara la variable.
system("color 9"); // Línea de código que permite el cambio de color en las letras a la hora de impresión de pantalla.
	
cout<<"ESTE PROGRAMA MUESTRA UNA PALABRA ESCRITA POR EL USUARIO\n"; // Muestra de que se trata el programa a nuestro usuario.
cout<<"INTRODUCE UNA FRASE:"; //linea de codigo que  muestra mensaje a usuario para que introduzaca la frase que desee.
cin>>frase; //Se alamcena la frase en la variable que el usuario introducio.
system("cls");// esta line de codigo limpia consola de todo texto previo.
cout<<"SU FRASE ES:"<<frase; // Muestra la frase que se guardo en n juestra variable a el usuario en pantalla.
cout<<endl; // linea de codigo que nos permite hacer un salto de linea.
system("PAUSE");//esta linea de codigo mantinene la terminal abierta asta que el usuario precione alguna tecla
	
return 0; //Finalizacion de nuestro programa.
}
