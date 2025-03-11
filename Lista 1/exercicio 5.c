#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
float p;
float a;
float i;
float j;
setlocale(LC_ALL, "Portuguese_Brazil");
printf("\n\n Calculadora de IMC:");
printf("\n\n Digite seu peso em Kg:");
scanf("%f",&i);
while(getchar()!='\n');
printf("\n\n Digite sua altura em metros:");
scanf("%f",&a);
j=a*a;
p=i/j;
if (18.5>p)
printf("\n\n Seu imc é de:%.2f, você está ABAIXO DO PESO",p);
else if(p>=18.5 && 25>p)
printf("\n\n Seu imc é de %.2f, você está NO PESO NORMAL", p);
else if (p>=25 && p<30)
printf("\n\n Seu IMC de:%.2f, você está com SOBREPESO", p);
else if(p>=30 && p<35)
printf("\n\n Seu IMC é de %.2f, você está com OBESIDADE GRAU 1", p);
else if(p>=35 && p<40)
printf("\n\n Seu IMC é de %.2f, você está com OBESIDADE GRAU 2", p);
else 
printf("\n\n Seu IMC é de %.2f, você está com OBESIDADE GRAU 3", p);
return 0;
}
