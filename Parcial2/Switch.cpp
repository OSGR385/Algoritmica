//Switch
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int Caso,Num1,Num,Resultado;
cout<<"Ingrese un numero y el caso en el que se resovera(1=-Suma,3=Resta,4=Multi,5=Div)"<<endl;
cin>>Caso;
cout<<"Numero 1"<<endl;
cin>>Num1;
cout<<"Numero Dos"<<endl;
cin>>Num;
switch(Caso){
    case 1:{
        Resultado=Num+Num1;
    }break;
     case 3:{
        Resultado=Num-Num1;
    }break;
     case 4:{
        Resultado=Num*Num1;
    }break;
     case 5:{
        Resultado=Num/Num1;
    }break;
}
cout<<Resultado<<endl;

    return 0;
    system("pause");
}