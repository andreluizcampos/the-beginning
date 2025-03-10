#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a, b, c;
printf("\n\n Digite três valores:");
scanf("%d %d %d", &a, &b, &c);
if(a>=c&&a>=b)
printf("\n\n O maior valor é:%d", a);
else{
	if(b>=a&&b>=c)
	printf("\n\n O maior valor é:%d", b);
	else
		printf("O maior valor é:%d",c);}
	
	if(a<c&&a<b)
	printf("\n\n O menor valor é:%d", a);
	else{
		if(a>=b&&c>=b)
		printf("\n\n O menor valor é:%d",b);
		else 
		printf("\n\n O menor valor é:%d", c);
		return 0;
	}
}


	

