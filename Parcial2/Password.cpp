//Password
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int Contra,X = 134;
    do{
        cout <<"Usuario: Admin\n\n Password:"<<endl;
        cin>>Contra;
        if (Contra!=X){
            cout<<"Contraseña incorrecta"<<endl;
        }
    }while(Contra!=X);
    cout<<"Contraseña correcta"<<endl;
    return 0;
        system("pause");
}