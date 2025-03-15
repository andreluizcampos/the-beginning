setlocale(LC_ALL, "Portuguese_Brazil");
int a, b, c, d;
printf("\n\n Coloque sua senha:\n\n");
scanf("%d", &a);
while(a!=123456){
printf("\n\n SENHA INVÁLIDA, TENTE NOVAMENTE:\n");
scanf("%d", &a);
}
printf("\n\n ACESSO PERMITIDO, APERTE ENTER PARA SEGUIR");
return 0;
}
