#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese_Brazil");
int a, b, c;
printf("\n\n Digite tr�s valores:");
scanf("%d %d %d", &a, &b, &c);
if(a>=c&&a>=b)
printf("\n\n O maior valor �:%d", a);
else{
	if(b>=a&&b>=c)
	printf("\n\n O maior valor �:%d", b);
	else
		printf("O maior valor �:%d",c);}
	
	if(a<c&&a<b)
	printf("\n\n O menor valor �:%d", a);
	else{
		if(a>=b&&c>=b)
		printf("\n\n O menor valor �:%d",b);
		else 
		printf("\n\n O menor valor �:%d", c);
		return 0;
	}
}


	

