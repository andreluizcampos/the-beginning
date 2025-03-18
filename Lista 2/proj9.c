#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
int a, s, n, b, c;
s=0;
printf("\n\n Digite um valor de n para calcular sua P.A:\n\n");
scanf("%d", &n);
printf("\n\n Insira um valor para A:\n\n");
scanf("%d", &a);
b=a;
c=n+=1;
for(a=b;a<c;a++)
s+=a;
printf("\n\n Soma da PA:%d", s);
return 0;
}
