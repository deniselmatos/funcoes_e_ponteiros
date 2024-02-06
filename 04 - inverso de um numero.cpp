#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

void inverse_number(char *str);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- Inverso de um número ---\n\n");
	
	char str[100] = {""};
    
    printf(" Digite um numero: ");
    scanf("%s", str);
	
	inverse_number(str);
	
	printf(" Número invertido: %s",str);
	
	printf("\n\n");
	
	system("pause");
	
	return 0;
}

void inverse_number(char *str){
	int  aux, end, size;
	size  = strlen(str);
	end = size - 1;
	
	for (int i = 0; i<size/2; i++){
		aux = *(str + i);
        *(str + i) = *(str + end);
        *(str + end) = aux;
        end--;
	}
}
