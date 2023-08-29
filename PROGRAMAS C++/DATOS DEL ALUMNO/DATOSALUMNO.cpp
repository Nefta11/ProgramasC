#include <iostream> // Libreria estandar de c++.
using namespace std; //Esta función nos permite evitar poner std en cada línea de cogido, ya que esto abarca todo.
int main() //Programa principal.

{
string nomb,ap,am,sx,fdn,cel,mat,cor,curp; // En esta linea de codigo se declara el tipo de dato string (cadena de texto), asi mismo se declaran nuestras variables donde se guardaran los nombres, apellidos,curp etc..
system("color 84"); // Línea de código que permite el cambio de color en las letras y fondo de pantalla (Color gris y rojo) a la hora de impresión de pantalla.
	
cout<<"ESTE PROGRAMA GUARDA Y MUESTRA DATOS PERSONALES DE ALUMNOS\n\n";// Muestra de que se trata el programa a nuestro usuario.
cout<<"INTRODUCE TU NOMBRE:"; //linea de codigo que  muestra mensaje a usuario para que introduzaca su nombre.
getline(cin,nomb); //función que nos permite obtener múltiples caracteres de la entrada de un usuario.
cout<<"INTRODUCE TU APELLIDO PATERNO:"; //linea de codigo que  muestra mensaje a usuario para que introduzaca su Apellido Paterno.
cin>>ap; // Da entrada y guarda la variable de Apellido P
cout<<"INTRODUCE TU APELLIDO MATERNO:"; //linea de codigo que  muestra mensaje a usuario para que introduzaca su Apellido Materno.
cin>>am; // Da entrada y guarda la variable de Apellido M
cout<<"INTRODUCE TU SEXO:"; //linea de codigo que  muestra mensaje a usuario para que introduzaca su Sexo.
cin>>sx; // Da entrada y guarda la variable de Sx.
cout<<"INTRODUCE TU FECHA DE NACIMIENTO:";
cin.ignore(); //función para descartar la entrada de usuario de la línea de comando no deseada.
getline(cin,fdn); //función que nos permite obtener múltiples caracteres de la entrada de un usuario.
cout<<"INTRODUCE NUMERO DE CELULAR:";//linea de codigo que  muestra mensaje a usuario para que introduzaca su Numero de celular.
cin>>cel; //Se alamcena la variable que el usuario introdujo.
cout<<"INTRODUCE TU MATRICULA:"; //linea de codigo que  muestra mensaje a usuario para que introduzaca su matricula.
cin>>mat; //Se alamcena la variable que el usuario introdujo.
cout<<"INTRODUCE TU CORREO ELECTRONICO:";
cin>>cor;
cout<<"INTRODUZCA SU CURP:";
cin>>curp;
system("PAUSE");//esta linea de codigo mantinene la terminal abierta asta que el usuario precione alguna tecla.
system("cls"); // esta line de codigo limpia consola de todo texto previo.
	
cout<<"NOMBRE:"<<nomb; //{ En todas estas lineas de texto que abarca desde Nombre hasta Curp, lo que se hace es solo imprimin en pantalla todos 
cout<<endl; // los datos personales que se recabamos del usuario de manera ordenada } //
cout<<"APELLIDO PATERNO:"<<ap;
cout<<endl;
cout<<"APELLIDO MATERNO:"<<am;
cout<<endl;
cout<<"SEXO:"<<sx;
cout<<endl;
cout<<"FECHA DE NACIMIENTO:"<<fdn;
cout<<endl; // en todas las lineas de codigo que aparece: "cou<<endl;" solo se aplica la funcion que nos permite hacer un salto de linea en cada una de ellas.
cout<<"CELULAR:"<<cel;
cout<<endl;
cout<<"MATRICULA:"<<mat;
cout<<endl;
cout<<"CORREO ELECTRONICO:"<<cor;
cout<<endl;
cout<<"CURP:"<<curp;

return 0; //Finalizacion de nuestro programa.
}