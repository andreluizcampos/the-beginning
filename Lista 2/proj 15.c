#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a, b, c, e=0;
printf("\n\n Digite dois números inteiros:");
scanf("%d %d", &a, &b);
for(c=1;c<=b;c++){
e+=a;
printf("\n\n Multiplicação por: %d \n %d", c, e);}
return 0;}
