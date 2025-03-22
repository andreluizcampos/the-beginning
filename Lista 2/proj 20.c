#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	int i;
	long double a=1;
	long double s=0;
	
	for(i=1;i<65;i++){
		a=a*2;
		s+=a;
		printf("\n %d:", i);
	__mingw_printf(" %Lf", a);
	__mingw_printf("\n\n Valor final: %Lf", s);
	}


	return 0;
}
