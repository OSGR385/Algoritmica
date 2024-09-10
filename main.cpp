#include <cstdio>
//#include<stdio.h>
#include<conio.h>

main(){
    char Nombre[20], Apellido[20];
    printf("Coloque un nombre\n");
    scanf("%s",Nombre);
    printf("Coloque un apelido\n");
    scanf("%s",Apellido);
        printf("Hola %s %s",&Nombre,&Apellido);

    getch();
    return 0;
}
