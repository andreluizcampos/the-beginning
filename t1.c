#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese_Brazil");
int a=5;
char b;
printf("\n ALISTAMENTO MILITAR OBRIGATÓRIO ANO DE 2025, VEJA SE VOCÊ DEVERÁ COMPARERCER:");
printf("\n\n VERIFIQUE A SUA SITUAÇÃO!");
printf("\n\n DIGITE SUA IDADE E GÊNERO f ou m:");
scanf("%d %c", &a, &b);
if (a==18&&b=='m')
printf("\n\n DEVERÁ SE ALISTAR ");
else printf("\n\n ESTÁ DISPENSADO");
return 0;
}
