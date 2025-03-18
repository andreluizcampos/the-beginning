#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
float m;
int s;
printf("\n \n Digite o valor em gramas, racionalmente:");
scanf("%f",&m);
while(m>=0.05)
{
s+=50;
m=m/2.0;
printf("\n\n Segundos:%d,	massa:%.2f", s, m);
}
return 0;
}
