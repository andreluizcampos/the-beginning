#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
int main(){
int v[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int q, w, u;
setlocale(LC_ALL, "Portuguese_Brazil");

for(q=0;q<=19;q++){
	printf("\n");
	printf("Posição:%d	vetor:%d",q,v[q]);
		printf("\n");}
	u=0;
	printf("\n");
	
for(w=19;w>=0;w--){
u+=1;
	printf("\n");
	printf("Posição:%d	  Vetor:%d",	u,	v[w]);
		printf("\n");
}
return 0;}
