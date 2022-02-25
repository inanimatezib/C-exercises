#include <stdio.h>
#include <math.h>

void arit(float x1, float x2, float x3) {
	float res;
	res = (x1 + x2 + x3) / 3;
	printf("\nA media aritmetica das notas e %.2f.", res);
}

void pond(float x1, float x2, float x3) {
	float res;
	res = (x1*5 + x2*3 + x3*2) / (x1 + x2 + x3);
	printf("\nA media ponderada das notas e %.2f.", res);
}

void harm(float x1, float x2, float x3) {
	float res;
	res = 3 / (1/x1 + 1/x2 + 1/x3);
	printf("\nA media harmonica das notas e %f.", res);
}

int main() {
	int opcao;
	float x1,x2,x3;
	printf("----------------------- MENU -----------------------");
	printf("\n\n1 - MEDIA ARITMETICA");
	printf("\n2 - MEDIA PONDERADA");
	printf("\n3 - MEDIA HARMONICA");
	printf("\n\nEscolha uma opcao: "); scanf("%d", &opcao);
	printf("\nDigite a primeira nota: "); scanf("%f", &x1);
	printf("Digite a segunda nota: "); scanf("%f", &x2);
	printf("Digite a terceira nota: "); scanf("%f", &x3);
	if (opcao == 1) 
	{
		arit(x1,x2,x3);
		
	} else if (opcao == 2) 
	{
		pond(x1,x2,x3);
		
	} else if (opcao == 3) 
	{
		harm(x1,x2,x3);
		
	} else
	{
		printf("Escolha uma opcao valida.");
	}
	return 0;	
}


