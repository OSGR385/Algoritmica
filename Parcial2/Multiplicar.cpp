//for multiplicar
#include<iostream>

using namespace std;

int main(){
int Multi,R,Num;

cout<<"Ingese un numero a multiplicar\n"<<endl;
cin>>Multi;
for (Num=1;Num<=10;Num++){
    R=Num*Multi;
    cout<<R<<endl;
} 
return 0;
}