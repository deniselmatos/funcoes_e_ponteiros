#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void order(int *n1, int *n2, int *n3);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Ordenando três valores inteiros ---\n\n");
	
	int n1, n2, n3;
	
	printf(" Digite o primeiro valor: ");
	scanf("%d",&n1);
	
	printf(" Digite o segundo valor: ");
	scanf("%d",&n2);
	
	printf(" Digite o terceiro valor: ");
	scanf("%d",&n3);
	
	order(&n1,&n2,&n3);
	
	printf(" Valores informados em ordem crescente: %d, %d, %d\n\n",n1,n2,n3);
	
	system("pause");
	
	return 0;
}

void order(int *n1, int *n2, int *n3){
	
	int aux;
	
	if(*n1 > *n2){
		aux = *n1;
		*n1 = *n2;
		*n2 = aux;
	}
	
	if(*n1 > *n3){
		aux = *n1;
		*n1 = *n3;
		*n3 = aux;
	}
	
	if(*n2 > *n3){
		aux = *n2;
		*n2 = *n3;
		*n3 = aux;
	}
	
}
