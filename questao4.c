#include <stdio.h>

int main() {
	char text2[100];
	char text3[100];
	printf("Digite um texto com ate 100 caracteres\n");
	gets(text2);
	int j = 0;
	for(j = 0; j < sizeof(text2) && text2[j] != '\0'; j++){
		text3[j] = text2[j];
	}
	printf("%s", text3);
	return 0;
}
