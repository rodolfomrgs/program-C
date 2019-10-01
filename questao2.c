#include <stdio.h>

int main() {
	char text1[100];
		printf("Digite um texto com ate 100 caracteres\n");
		gets(text1);
		int vogais = 0, i = 0;
		for(i = 0; i < sizeof(text1) && text1[i] != '\0'; i++){
			if(text1[i] == 'a' || text1[i] == 'e' || text1[i] == 'i' || text1[i] == 'o' || text1[i] == 'u'){
				vogais++;
			}
			if(text1[i] == 'A' || text1[i] == 'E' || text1[i] == 'I' || text1[i] == 'O' || text1[i] == 'U'){
				vogais++;
			}
		}
		printf("\nO total de vogais digitadas no texto  foi de: %d", vogais);
		return 0;
}
