#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");	
float h, hta=0, hm=0, im=0;
int i, it=0, qa=0, qb=0, n;
for(n=1;n<5;n++){
printf("\n\n Insira sua altura e idade:\n");
scanf("%f%d", &h, &i);

if(i>20){
qa+=1;
hta+=h;	
} 
if(1.7>h){
qb+=1;
it+=i;
}}
	hm=hta/qa;
	im=(float)it/ qb;
	
printf("\n\n Média de altura dos mais velhos:%.2f", hm);
printf("\n\n Média de idade dos baixos: %.2f",im);
return 0;
}

