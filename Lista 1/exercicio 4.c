#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int d, r;
int op;
printf("\n\n\ C�mbio entre d�lar e real!\n\n Selecione a op��o que deseja:\n 1. D�lar para real \n 2. Real para d�lar \n 3. Sair");
scanf(" %d", &op);
switch(op){
case 1:
printf("\n\n Conversor de d�lar para real!");
printf("\n\n Digite um valor em d�lar:\n");
scanf("%d", &d);
printf("\n\n Valor retornado em real:%.2f", d*5.3);
break;

case 2:
printf("\n\n Conversor de real para d�lar:");
printf("\n\n Digite um valor:\n");
scanf("%d", &r);
printf("\n\n Valor em d�lares:.%2f", r/5.3);
break;
return 0;
}
}



	

