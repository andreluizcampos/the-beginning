#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int v[25],g[25],f[25];
int q, p;
 v[25]=rand();
 g[25]=rand();
 
     for(q=0;q<25;q++){
	printf("\n Vetor 1(%d): %d",q, v[q]);	
}
printf("\n");
    for(q=0;q<25;q++){
	printf("\n Vetor 2(%d): %d",q, g[q]);}	
	printf("\n");
	
  for(q=0;q<25;q++){
  	f[q]=g[q]+v[q];
  		printf("\n Vetor soma(%d): %d",q, f[q]);	
  }
  return 0;}
