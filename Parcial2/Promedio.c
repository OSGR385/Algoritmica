//Promedio
#include<stdio.h>
#include<conio.h>
float Cal1,Cal2,Cal3,R;
main(){
printf("Ingrese primera calificacion\n");
    scanf("%f",&Cal1);
printf("Ingrese segunda calificacion\n");
    scanf("%f",&Cal2);
printf("Ingrese tercera calificacion\n");
    scanf("%f",&Cal3);
R = (Cal1+Cal2+Cal3)/3;

if (R>=6){
    printf("Aprobado");
}else{
    printf("Reprobado");
}

getch();
}
