#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
float c=150.0, s=130, a=2.0, b=3.0;
setlocale(LC_ALL, "Portuguese_Brazil");
int y=0;
do{
c+=2.0;
s+=3.0;
y+=1;	
}while(c>s);
printf("\n\n Anos necessários para passar:%d", y+=1);
return 0;}
