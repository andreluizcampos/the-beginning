#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a;
printf("\n\n Múltiplos de 7 até 9999");
for(a=0;a<10000; a+=7)
printf("\n\n Múltiplos:%d", a);
return 0;}
