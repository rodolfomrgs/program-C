#include <stdio.h>

void concatenar(char [], char []);
 
int main() {
	char text1[20], text2[20];
	printf("Digite a primeira palavra\n");
	gets(text1);
   	printf("Digite a segunda palavra\n");
   	gets(text2);
   	concatenar(text1, text2);
   	printf("String concatenada: %s""\n", text1);
   	return 0;
}
 
void concatenar(char text1[], char text2[]) {
   	int i, j;
   	while (text1[i] != '\0') {
      i++;      
   	}
	while (text2[j] != '\0') {
      text1[i] = text2[j];
      j++;
      i++;  
   	}
   	text1[i] = '\0';
}
