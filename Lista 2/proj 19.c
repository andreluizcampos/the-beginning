#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a, b;
do{
printf("\n\n Digite um valor para X e Y:\n");
scanf("%d %d", &a,&b);
printf("\n\n Valor de X:%d, Valor de Y:%d", a, b);
} while(a!=0&&b!=0);
return 0;
}
