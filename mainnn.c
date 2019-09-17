#include <stdio.h>
#include <math.h>

int main(){
	
	int opcao;
	printf("Menu: \n"
			"1 - Opcao um - O numero eh par ou impar?\n"
			"2 - Opcao dois - Qual a potencia?\n"
			"3 - Opcao tres - Qual a raiz?\n"
			"4 - Opcao quatro - Confira se o ano eh ou nao eh bissexto!\n"
			"5 - Opcao cinco - Veja se vc foi aprovado!\n"
			"6 - Opcao seis\n"
			"7 - Opcao sete\n"
			"8 - Opcao oito\n"
			"9 - Opcao nove\n"
			"10 - Opcao dez\n"
			"0 - Sair");
			
	printf("\nDigite um numero do Menu acima: ");scanf("%d", &opcao);
	
	while(opcao !=0){
		switch(opcao){
			case 1:
				printf("\nPar ou Impar");
				
				int numero;
				printf("\nDigite um numero: ");scanf("%d", &numero);
				
				if(numero % 2 == 0){
					printf("\n%d O numero eh Par!!\n ",numero);
				}else{
					printf("\n%d O numero eh Impar!!\n ",numero);
				}
				printf("\nDigite um numero do Menu acima: ");scanf("%d", opcao);
				break;
			
			case 2:
				printf("\nPotenciacao");
				
				double a;
				int b;
				double potencia;
				printf("\nPrimeiro termo: ");scanf("%lf", &a);
				printf("\nSegundo termo: ");scanf("%d", &b);
				
				potencia = pow(a,b);
				printf("\nO valor de %.2f elevado a %d eh = %.21f\n",a,b,potencia);
				
				printf("\nDigite um numero do Menu acima: ");scanf("%d", opcao);
				break;
			
			case 3:
				printf("\nRaiz");
				
				double x;
				int y;
				double raiz;
				
				printf("\nPrimeiro termo: ");scanf("%lf", &x);
				printf("\nSegundo termo: ");scanf("%d", &y);
				raiz = sqrt(x);
				printf("\nO valor da raiz eh = %.2lf\n",raiz);
				
				printf("\nDigitee um numero do Menu acima: ");scanf("%d", opcao);
				break;
			
			case 4:
				printf("\nAno Bissexto");
				
				int ano;
				printf("\nInforme um ano: ");scanf("%d", &ano);
				
				if(ano % 4 == 0){
					printf("\n%d eh ano bissexto!!\n", ano);
				}else{
					printf("\n%d nao eh ano bissexto!!\n", ano);
				}
				printf("Digite um numero do Menu acima: ");scanf("%d", opcao);
				break;
				
			case 5:
				printf("\nVenha conferir se vc foi aprovado!");
				
				double nota1, nota2, nota3;
				double media;
				
				printf("\nDigite a primeira nota: ");scanf("%lf", &nota1);
				printf("\nDigite a segunda nota: ");scanf("%lf", &nota2);
				printf("\nDigite a terceira nota: ");scanf("%lf", &nota3);
				
				media = (1 * nota1 + 1 * nota2 + 1 * nota3)/(1 + 1 + 2);
				if(media >= 60){
					printf("\nSua media foi: %.2lf. Voce foi aprovado, parabens!!!", media);
				}else{
					printf("\nSua media foi: %.2lf. Voce foi reprovado, estude mais!", media);
				}
				printf("\nDigite um numero do Menu acima: ");scanf("%d", opcao);
				break;
				
			default:
				printf("\nOpcao invalida!!!");
				printf("Digite um numero do Menu acima: ");scanf("%d", opcao);
		}
	}
}
