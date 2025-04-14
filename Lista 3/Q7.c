#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>
int main(){
int q,p,z,y=0,j=0,x;
int v[100], o[100];
srand(100);
setlocale(LC_ALL, "Portuguese_Brazil");

	printf("\n Sem ordenação:");	
	for(q=0;q<100;q++){
		printf("\n");
		v[q]=rand();
		printf("%d", v[q]);}
		printf("\n");
		printf("\n\n");
		do{
			j=0;
			for(q=0;q<100;q++){
				if(v[q]>v[q+1]){
					x=v[q];
					v[q]=v[q+1];
					v[q+1]=x;
					j=1;
}}}	while(j);
		printf("\n Com ordenação:\n");
	for(q=0;q<100;q++){
			printf("%d",v[q]);
			printf("\n");}
			return 0;}
			
	
