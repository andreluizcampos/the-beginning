#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese_Brazil");
int soma;
int a;
printf("\n\n Soma de todos os ímpares de 1 a 1000");
	for(a=1; a<1001; a+=2)
	soma+=a;
	printf("\n \n TOTAL	:%d", soma);
return 0;
}
