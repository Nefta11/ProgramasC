#include <iostream>
using namespace std;
int main()

{
int x,itabla;
do
{
cout<<"ESTE PROGRAMA MUESTRA LA TABALA DE MULTIPLICAR DE UN VALOR ESTANDAR DEL 1 A 10";
cout<<"\n\n INTRODUCE UN NUMERO:";
cin>>itabla;

if (itabla>0 and itabla<11)

{
for(int i=1;i<=10;i++)	
{
cout<<itabla<<"X"<<i<<"="<<itabla*i<<endl;				
}
}	
else
{
cout<<"*********VALOR NO VALIDO********";
}
cout<<"\n\nINTRODUCE 1 PARA REGRESAR U OTRO NUMERO PARA SALIR:";
cin>>x;
system("cls");
}
while (x==1);
cout<<"\n\nFIN DE PROGRAMA";	
return 0;	
}