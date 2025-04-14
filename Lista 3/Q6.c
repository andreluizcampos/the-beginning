#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
int n[10];
int q, b, j;
	for(q=0;q<10;q++){
	   printf("\n Digite o valor do vetor:%d\n", q);
	   scanf("%d",&n[q]);
	}
	do{
	printf("\n Digite o que desejas fazer: 1. Imprimir o vetor em ordem \n 2. Imprimir a ordem vetorial inversa \n 0. Sair do programa");
	scanf("%d", &j);
		switch(j){
			case 1:
				for(q=0;q<10;q++)
	 			printf("%d", n[q]);
	 			printf("\t");
				 break;
				 
			case 2:
			for(q=9;q>=0;q--)
			printf("%d", n[q]);
			break;
			
			default:
				printf("\n ta maluco nengue");
	}}while(j>0||j<0);
	return 0;}
		
	
