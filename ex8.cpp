#include <stdio.h>
#include <math.h>


int main() {
	int x;
	printf("Digite um valor: "); scanf("%d", &x);
	if (x == 0) 
	{
		printf("\n%d e positivo ou negativo??????", x);
		
	} else if (x < 0) {
		printf("\nO numero %d e negativo.", x);
		
	} else {
		printf("\nO numero %d e positivo.", x);
		
	}
	
	return 0;
}
