#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese_Brazil");
int a=5;
char b;
printf("\n ALISTAMENTO MILITAR OBRIGAT�RIO ANO DE 2025, VEJA SE VOC� DEVER� COMPARERCER:");
printf("\n\n VERIFIQUE A SUA SITUA��O!");
printf("\n\n DIGITE SUA IDADE E G�NERO f ou m:");
scanf("%d %c", &a, &b);
if (a==18&&b=='m')
printf("\n\n DEVER� SE ALISTAR ");
else printf("\n\n EST� DISPENSADO");
return 0;
}
