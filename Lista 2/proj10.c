#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
int n, c;
setlocale(LC_ALL, "Portuguese_Brazil");
int s=0;
int d=1;
	for(n=1; n<31; n++){
	d=d*2;	
	s+=d;
	printf("\n\n dia:%d \n\n centavo do dia:%.2f \n\n soma em real:%.2f", n, (float) d, (float)s/100.0 );
}
return 0;}
