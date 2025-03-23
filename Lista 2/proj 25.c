#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a, b,c;
printf("\n\n Digite dois números:\n");
scanf("%d %d", &a,&b);
for(c=1;c<=b;c++){
printf("%d \t", c);
if(c%a==0)
printf(" \n ");}
return 0;}
