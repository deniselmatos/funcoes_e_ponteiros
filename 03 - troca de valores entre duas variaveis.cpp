#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void exchange_values(int *n1, int *n2);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Troca de valores entre duas variáveis ---\n\n");
	
	int n1, n2;
	
	printf(" Digite o primeiro valor: ");
	scanf("%d",&n1);
	
	printf(" Digite o segundo valor: ");
	scanf("%d",&n2);
	
	exchange_values(&n1,&n2);
	
	printf(" Valores trocados: %d e %d\n\n",n1,n2);
	
	system("pause");
	
	return 0;
}

void exchange_values(int *n1, int *n2){
	
	*n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;
	
}
