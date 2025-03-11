#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
setlocale(LC_ALL,"Portuguese_Brazil");
int m;
printf("\n\n Quantos dias tem tal mês? Digite o número referente ao mês desejado, ex: Janeiro - 1");
scanf("%d", &m);
switch(m){
case 1:
printf("\n\n Janeiro tem 31 dias!");
break;
case 2:
printf("\n\n Fevereiro tem 28 dias!");
break;
case 3:
printf("\n\n Março tem 31 dias!");
break;
case 4:
printf("\n\n Abril tem 30 dias!");
break;
case 5:
printf("\n\n Maio tem 31 dias!");
break;
case 6:
printf("\n\n Junho tem 30 dias!");
break;
case 7:
printf("\n\n Julho tem 31 dias!");
break;
case 8:
printf("\n\n Agosto tem 31 dias!");
break;
case 9:
printf("\n\n Setembro tem 30 dias!");
break;
case 10:
printf("\n\n Outubro tem 31 dias!");
break;
case 11:
printf("\n\n Novembro tem 30 dias!");
break;
case 12:
printf("\n\n Dezembro tem 31 dias!");
default:
printf("\n\n Ta doido nengue");
}
return 0;
}


