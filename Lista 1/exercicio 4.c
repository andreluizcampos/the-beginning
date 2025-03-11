#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int d, r;
int op;
printf("\n\n\ Câmbio entre dólar e real!\n\n Selecione a opção que deseja:\n 1. Dólar para real \n 2. Real para dólar \n 3. Sair");
scanf(" %d", &op);
switch(op){
case 1:
printf("\n\n Conversor de dólar para real!");
printf("\n\n Digite um valor em dólar:\n");
scanf("%d", &d);
printf("\n\n Valor retornado em real:%.2f", d*5.3);
break;

case 2:
printf("\n\n Conversor de real para dólar:");
printf("\n\n Digite um valor:\n");
scanf("%d", &r);
printf("\n\n Valor em dólares:.%2f", r/5.3);
break;
return 0;
}
}



	

