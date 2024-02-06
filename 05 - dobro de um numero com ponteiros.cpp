#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void double_number(float *ptn);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Dobro de um número com ponteiros ---\n\n");
	
	float n;

    printf(" Digite um numero: ");
    scanf("%f",&n);
    
    double_number(&n);
	
	printf("\n\n");
	
	system("pause");
	
	return 0;
}

void double_number(float *ptn){
	printf(" Valor informado: %.2f\n",*ptn);
    *ptn *= 2;	
    printf(" O dobro do número informado é %.2f",*ptn);
}
