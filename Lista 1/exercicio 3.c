#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a;
printf("\n\n Digite um n�mero inteiro para vermos se � divis�vel por 2, 3 ou 5:\n");
scanf("%d", &a);
if(a%3!= 0 && a%5!=0 && a%2!=0)
printf("\n\n N�o � divis�vel por nenhum");
else if (a%3!=0 &&a%2!=0 &&a%5!=0)
printf("\n\n Divis�vel apenas por 5");
else if (a%3==0&&a%5!=0&&a%2!=0)
printf("\n\n Divis�vel apenas por 3");
else if(a%3!=0&& a%2==0&& a%5!=0)
printf("\n\n Divis�vel apenas por 2");
else if(a%3==0 && a%2==0 && a%5!=0)
printf("\n\n Divis�vel apenas por 2 e 3");
else if (a%3!=0 && a%2==0 && a%5==0)
printf("\n\n Divis�vel apenas por 2 e 5");
else if (a%3==0 && a%2!=0 && a%5==0)
printf("\n\n Divis�vel apenas por 3 e 5");
else 
printf("\n\n Divis�vel por todos");
getchar ();
return 0;}




	

