#include<stdio.h>
int main()
{
    int idade,ano;
	float altura;
    char nome[30];
    
	printf("Digite o seu nome:");
	
	scanf("%s", nome);
	
	printf("Digite a idade:");
	
	scanf("%d", &idade);
	
	printf("Digite a altura:");
	
	scanf("%f", &altura);
	
	ano = 2022-idade;
	
	printf(" \n O nome e: %s", nome);
	
	printf(" \n A altura e: %.2f", altura);
	
	printf(" \n A idade e: %d", idade);
	
	printf(" \n O ano de nascimento e: %d", ano);
	
	return (0);	
}
    
	
	
	
	
	
	
