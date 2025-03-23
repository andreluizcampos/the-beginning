#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a, b,c, f;

printf("\n\n Digite suas notas :\n");
scanf(" %d %d", &a,&b);
if(a<0||a>10){
printf("\n\n Digite um valor válido para n1: \n");
scanf(" %d", &a);}
if(b<0||b>10){
	printf("\n\n Digite um valor válido para n2:\n");
	scanf("%d", &b);}
printf("\n Média semestral:%.2f", ((float)a + (float)b)/2) ;
printf("\n \n Digite 1 para alterar o valor e 2 para encerrar o programa");
scanf(" %d", &f);
switch(f){
	case 1:	printf("\n\n Digite suas notas :\n");
	scanf(" %d %d", &a,&b);
	if(a<0||a>10){
		printf("\n\n Digite um valor válido para n1: \n");
		scanf(" %d", &a);}
	if(b<0||b>10){
		printf("\n\n Digite um valor válido para n2:\n");
		scanf("%d", &b);}
	printf("\n Média semestral:%.2f", ((float)a + (float)b)/2);
	printf("\n \n Digite 1 para alterar o valor e 2 para encerrar o programa:\n");
scanf("%d", &f);
	break;

	case 2:
	printf("\n\n Fim do programa:");
	default: 
	printf("\n\n exxa");}
	
return 0;}
