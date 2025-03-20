#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
int f, so, n, sma=0, smi=100000;
float st=0, sm, s;
setlocale(LC_ALL, "Portuguese_Brazil");
printf("\n\n Digite a quantidade de funcionários:\n\n");
scanf("%d", &f);
for(n=1; n<=f; n++){
	printf("\n\n Digite o salário do funcionário %d ",n);
	scanf("%f", &s);
	st+=s;
	if(s>sma)
	sma=s;
	if(s<smi)
	smi=s;
	sm=st/f;}
	
printf("\n\n Média salarial:%.2f", sm);
printf("\n\n Maior salário:%2.f", (float)sma);
return 0;}
