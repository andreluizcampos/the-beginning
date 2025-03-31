#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int v[10], g[10];
int q;
for(q=0;q<10;q++){
	printf("\n\n Insira valores para o vetor %d:\n", q);
	scanf(" %d", &v[q]);}

for(q=0;q<10;q++){
	printf("\nVetor:%d= %d ",1+q, v[q]);}
	printf("\n");
for(q=0;q<10;q++){
	g[q]=v[q]*v[q];
	printf("\n Quadrado:%d= %d",1+q, g[q]);}
	return 0;}
