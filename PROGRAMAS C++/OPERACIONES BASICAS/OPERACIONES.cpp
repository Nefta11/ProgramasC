#include <iostream> // Libreria estandar de c++.
using namespace std;//Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.
int main ()//Programa principal.
{
	
int n1,n2,resultado; // En esta linea de codigo declaramos variables de numeros enteras, para que el usuario pueda meter el numero 1, numero 2 y se realice la suma.
system("color 4"); // Linea de codigo que permite el cambio de color en l
	
cout<<"ESTE PROGRAMA REALIZA LAS OPERACIONES DE SUMA,RESTA,MULTIPLICACION,DIVICION DE DOS NUMEROS\n ";  // presentacion de lo que hace nuestro programa
cout<<"****Suma de dos numeros*****"; // Aqui se le indica a el usuario que operacion aritmetica se ejecutara.
cout<<"\n\nINTRODUCE EL PRIMER NUMERO:"; // se le pide al usuario introducir el primer numero.
cin>>n1;                                // se guarda la variable del primer numero.
cout<<"INTRODUCE EL SEGUNDO NUMERO:";
cin>>n2;
resultado=n1+n2; // se ejecuta la operacion aritmetica en este caso la suma.
cout<<"EL RESULTADO DE LA SUMA ES:"<<resultado; // se le muestra en pantalla al ususario el resultado de su operacion.

cout<<"\n\n****Resta de dos numeros*****"; // Aqui se le indica a el usuario que operacion aritmetica se ejecutara.
cout<<"\n\nINTRODUCE EL NUMERO AL QUE LE QUIERES RESTAR:";// se le pide al usuario introducir el primer numero.
cin>>n1;// se guarda la variable del primer numero.
cout<<"INTRODUCE EL SEGUNDO NUMERO LA CANTIDAD QUE RESTARAS:";
cin>>n2;
resultado=n1-n2; // se ejecuta la operacion aritmetica en este caso es resta.
cout<<"EL RESULTADO DE LA RESTA ES:"<<resultado; // se le muestra en pantalla al ususario el resultado de su operacion.

cout<<"\n\n****Multiplicacion de dos numeros*****"; // se muestra al usuario en pantalla la operacion aritmetica que realiza nuestro programa.
cout<<"\n\nINTRODUCE EL PRIMER NUMERO:"; // linea de codigo que le solicita al usuario introducir el primer numero.
cin>>n1; //linea de codigo que guarda la variable de numero que metio el usuario.
cout<<"INTRODUCE EL SEGUNDO NUMERO:";
cin>>n2;
resultado=n1*n2; //en esta linea de codigo se ejecuta la operaracion de multiplicacion.
cout<<"EL RESULTADO DE LA MULTIPLICACION ES:"<<resultado; // se muestra en pantalla el resultado de la operacion.

cout<<"\n\n****Division de dos numeros*****"; // se muestra al usuario en pantalla la operacion aritmetica que realiza nuestro programa.
cout<<"\n\nINTRODUCE EL PRIMER NUMERO:"; // linea de codigo que le solicita al usuario introducir el primer numero.
cin>>n1; //linea de codigo que guarda la variable de numero que metio el usuario.
cout<<"INTRODUCE EL SEGUNDO NUMERO:";
cin>>n2;
resultado=n1/n2; //en esta linea de codigo se ejecuta la operaracion de division.
cout<<"EL RESULTADO DE LA DIVISION ES:"<<resultado; // se muestra en pantalla el resultado de operacion.

return 0; // finalizacion de nuestro programa.		
}