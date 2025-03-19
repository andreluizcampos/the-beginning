#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a, b, c ,d, div=0;
do{
	printf("\n\n Digite um valor:");
	scanf("%d", &a);

		while(2>a){
		printf("\n\n Selecione um valor:\n");
		scanf("%d", &a);}
		
for(d=1;d<=a;d++)
	if(a%d==0){
	div+=1;
	printf("\n\n Divisores de %d", a);
	printf("\t: %d", d);}
	
	if(div==2){
	printf("\n\n É primo");}
	else
	printf("\n\n Não é primo");
} while(2>a);
return 0;}
