//Calculadora
#include<stdio.h>
#include<conio.h>

float N1,N2,Result,Ac,R;
main(){
    printf("Ingrese numero 1\n");
    scanf("%f",&N1);
    printf("Ingrese numero 2\n");
    scanf("%f",&N2);
    printf("Accion a realizar(1=+,2=-,3=/,4=*)\n");
    scanf("%f",&Ac);
    if (Ac == 1) {
        R = N1+N2;
    }
    if (Ac == 2) {
        R = N1-N2;
    }
    if (Ac == 3) {
        R = N1/N2;
    }
    if (Ac == 4) {
        R = N1*N2;
    }
           printf("\n\nResultado\n %.2f",R);
 getch();
}
