#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
char *m[12]={"Janeiro", "Fevereiro","Março","Abril", "Maio", "Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
int q, b;
float t[12], ma=0, mi=1000;
setlocale(LC_ALL, "Portuguese_Brazil");
	for(q=0;q<12;q++){
		printf("\n Digite a temperatura média do mês de: %s\n", m[q]);
		scanf("%f",&t[q]);}
		printf("\n");
	for(q=0;q<12;q++){
		if (t[q]>ma)
		ma=t[q];}
	for(q=0;q<11;q++){
		if(t[q]==ma)
		printf("\n O mês de maior temperatura: %s, com a temperatura média de:%.2f °C",m[q], t[q]);}
	for(q=0;q<12;q++){
			if (mi>t[q])
			mi=t[q];
		}
	for(q=0;q<12;q++){
		if(mi==t[q])
			printf("\n O mês de menor temperatura: %s, com a temeperatura média de:%.2f °C", m[q], t[q]);
	}
	return 0;}
		
	
