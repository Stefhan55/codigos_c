#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int x;
	float y;
	
    x=10;
    y=3.14;
    
   printf("Valores iniciais das variaveis x e y:\n");
   printf("Valor de x na memoria: %d.\n", x); 
   printf("Valor de y na memoria: %.2f.\n\n", y);

   printf("Insira um novo valor para x:\n");
   scanf("%d" , &x);
   
   printf("\nNovo valor de x na memoria.: %d.\n", x);
   
   printf("Insira um novo valor para y:\n");
   scanf("%f",&y);
   
   printf("\nNovo valor de y na memmoria.: %.2f.\n",y);
   return 0;
}
