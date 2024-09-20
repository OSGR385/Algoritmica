#include<stdio.h>
#include<conio.h>

int Dia,Mes,Year,Edad;
                  	
main(){
  printf("Escribe dia de nacimiento\n");
  scanf("%d",&Dia);
  printf("Escribe dia de nacimiento\n");
  scanf("%d",&Mes);
  printf("Escribe dia de nacimiento\n");
  scanf("%d",&Year);
  Edad = 2024-Year;
  printf("\nTu edad es de %d :\n",Edad);

 getch();
 return 0;
}