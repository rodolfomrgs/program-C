#include <stdio.h>

int main() {
	char text[100];
	printf("Digite um texto com ate 100 caracteres:\n");
	gets(text);
	int contCaract = 0;
	while(text[contCaract] != '\0') {
		contCaract++;
	}
	printf("O texto %s possui %i caracteres", text, contCaract);
	return 0;
}
