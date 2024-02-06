#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

void without_vowels(char *string);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n --- String com vogais removidas ---\n\n");
	
	char text[1000];
	
	printf(" Digite um texto: ");
	fgets(text, 1000, stdin);
	
	without_vowels(text);
	
	printf("\n\n");
	
	system("pause");
	
	return 0;
}

void without_vowels(char *string){
	
	char *copy = string;
	int j = 0;
	
	for (int i=0;i<strlen(string);i++){
		if (string[i] != 'A' && string[i] != 'a' && string[i] != 'E' && string[i] != 'e' && string[i] != 'I' && string[i] != 'i' && string[i] != 'O' && string[i] != 'o' && string[i] != 'U' && string[i] != 'u'){
			copy[j++] = string[i];
		}
	}
	
	copy[j] = '\0';
	
	printf(" Texto com vogais removidas: %s",copy);
	
}

