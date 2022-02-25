#include <stdio.h>
#include <math.h>

int main() {
	int x;
	printf("Digite um valor: "); scanf("%d", &x);
	if (x == 0) 
	{
		printf("\n%d e par ou impar??????", x);
		
	} else if (x % 2 == 0) {
		printf("\nO numero %d e par.", x);
		
	} else {
		printf("\nO numero %d e impar.", x);
		
	}
	
	return 0;
}
