#include <stdio.h>

int main() {
	char text5[20], text6[20];
	printf("Primeiro texto:\n");
	gets(text5);
	printf("Segundo texto\n");
	gets(text6);
	if(comparar_strings(text5, text6) == 0) {
		printf("Sao iguais!\n");
	}else{
		printf("Sao diferentes!\n");
	}
	return 0;
}

int comparar_strings(char text5[], char text6[]) {
	int c = 0;
	while (text5[c] == text6[c]) {
		if (text5[c] == '\0' || text6[c] == '\0')
		break;
		c++;
	}
	if (text5[c] == '\0' && text6[c] == '\0') {
		return 0;
	}else{
		return -1;
	}
}
