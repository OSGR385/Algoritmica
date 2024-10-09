//While
#include<stdio.h>
#include<conio.h>

int Num,Pro;
main(){
    Num = 1;
while(Num!=0){
    printf("Escribe un numero difernete a 0\n");
    scanf("%i",&Num);
    Pro=Pro+Num;
}
    printf("\n\nSumaTotal = %i",Pro);
}
