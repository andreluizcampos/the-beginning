#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {

setlocale(LC_ALL, "Portuguese_Brazil");
int a, b;
printf("\n\n TABUADA!, Digite um n�mero	inteiro: \n\n");
scanf("%d", &a);
while(a<=0)
printf("\n\n OPERA��O INV�LIDA, DIGITE NOVAMENTE:\n");

for(b=1;b<11;b++){
	printf("   %d x %d:",b, a );
	printf("\t%d\n", a*b);}
return 0; 
}


