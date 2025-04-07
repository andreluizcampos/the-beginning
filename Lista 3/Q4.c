#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
int v[10], q, b,m=0;
float g[10], s=0;
	for(q=0;q<10;q++){
		printf("\n Digite a quantidade do produto %d: \n", q);
		scanf("%d", &v[q]);
		printf("\n Digite o valor do produto %d: \n", q);	
		scanf("%f", &g[q]);
			s+=g[q]*v[q];
	}
	for(q=0;q<10;q++){
		printf("\n Valor obtido com o produto %d: R$%.2f",q, v[q]*g[q]);}
		printf("\n Valor total obtido:%.2f", s);
	for(q=0;q<10;q++){
			if(v[q]>m){
			m=v[q];}}
			
				for(q=0;q<10;q++){
			if(v[q]==m)
			printf("\n Produto mais vendido: %d, valendo:%.2f",q,g[q]);}
			
		printf("\n Valor total a ser recebido pelo vendedor: %.2f", s*0.05);  
 return 0;}
