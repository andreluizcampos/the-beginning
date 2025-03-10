#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a,b,c,d, e;
int p, n, z;
p=0;
n=0;
z=0;
printf("\n\n Digite 5 números, pelo menos um diferente quanto ao sinal:\n");
scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
if(a>0)
p++;
else{
if(a<0)
n++;
else
z++;
}
if(b>0)
p++;
else if (b<0)
n++;
else 
z++;
if(c>0)
p++;
else if (0>c)
n++;
else
z++;
if(d>0)
p++;
else if (d<0)
n++;
else
z++;
if(e>0)
p++;
else if(0>e)
n++;
else
z++;
printf("\n\n Quantidade total de negativos:%d", n);
printf("\n\n Quantidade total de positivos:%d", p);
printf("\n\n Quantidade total de nulos:%d", z);
return 0;
}




	

