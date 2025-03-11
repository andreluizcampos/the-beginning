#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a;
printf("\n\n Digite um número inteiro para vermos se é divisível por 2, 3 ou 5:\n");
scanf("%d", &a);
if(a%3!= 0 && a%5!=0 && a%2!=0)
printf("\n\n Não é divisível por nenhum");
else if (a%3!=0 &&a%2!=0 &&a%5!=0)
printf("\n\n Divisível apenas por 5");
else if (a%3==0&&a%5!=0&&a%2!=0)
printf("\n\n Divisível apenas por 3");
else if(a%3!=0&& a%2==0&& a%5!=0)
printf("\n\n Divisível apenas por 2");
else if(a%3==0 && a%2==0 && a%5!=0)
printf("\n\n Divisível apenas por 2 e 3");
else if (a%3!=0 && a%2==0 && a%5==0)
printf("\n\n Divisível apenas por 2 e 5");
else if (a%3==0 && a%2!=0 && a%5==0)
printf("\n\n Divisível apenas por 3 e 5");
else 
printf("\n\n Divisível por todos");
getchar ();
return 0;}




	

