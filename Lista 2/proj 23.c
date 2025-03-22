#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a,b,c=0;
do{
c+=1;
	
for(a=1;a<c;a++)
printf("*");
printf("\n");
}while(c<9);
return 0;}

 
