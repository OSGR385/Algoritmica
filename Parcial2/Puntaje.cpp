//Puntaje
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int Puntaje;
    cout<<"Puntaje(0-100)"<<endl;
    cin>>Puntaje;
    char Letra;
    switch (Puntaje/10)
    {
    case 10:
    case 9:
    Letra = 'A';
    break;
    case 8:
    Letra = 'B';
    break;
    case 7:
    Letra = 'C';
    break;
    case 6:
    Letra = 'D';
    break;
    default:
    Letra = 'F';
    break;
    }
    cout<<"Calificacion final"<<endl;
    cout<<Letra<<endl;
return 0;
system("pause");
}