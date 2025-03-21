#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
int a, b, c, n, p;
p=0;
n=0;
do
{
printf("\n\n Digite um número:");
scanf("%d",&a);
if(a<0)
n++;
if(a>0)
p++;
}while(a!=0);
printf("\n\n NEGATIVOS:%d \n POSITIVOS=%d", n, p);
return 0;}
