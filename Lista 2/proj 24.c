#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int i=1, j, c;
do{
	for(j=6+i; j>=i+4;j--)
		printf("I=%d J=%d  \t \n", i, j);
	i+=2;	
}while(i<10);
return 0;}
