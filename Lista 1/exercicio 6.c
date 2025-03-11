#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
setlocale(LC_ALL,"Portuguese_Brazil");
int op;
int a;
printf("\n\n Selecione um mês do calendário de acordo com sua ordem, ex: Janeiro= 1, Fevereiro=2\n");
scanf("%d",&op);
switch(op){
case 1:
printf("\n\n Mês de Janeiro!");
break;
case 2:
printf("\n\n Mês de fevereiro!");
break;
case 3:
printf("\n\n Março!");
break;
case 4:
printf("\n\n Abril!");
break;
case 5:
printf("\n\n Maio!");
break;
case 6:
printf("\n\n Junho!");
break;
case 7:
printf("\n\n Julho");
break;
case 8:
printf("\n\n Agosto");
break;
case 9:
printf("\n\n Setembro!");
break;
case 10:
printf("\n\n Outubro!");
break;
case 11:
printf("\n\n Novembro!");
break;
case 12:
printf("\n\n Dezembro!");
default:
printf("\n	TA LOUCO PORRAAAAAA");}

return 0;
}

