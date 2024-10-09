#include <iostream>

using namespace std;
int main()
{
    string Usuario,Contra,R;
    Usuario = "Admin";
    Contra = "1345B";
    cout<<"Usuario: Admin\n"<<endl;
    cout<<"Ingrese contraseña\n"<<endl;
    cin>>R;
if (R!=Contra){
    do{
        cout<<"Erro en la contraseña\n"<<endl;
        cin>>R;
    }
    while(R!=Contra);
}
cout<<"\nContraseña corecta\n"<<endl;

    return 0;
}
