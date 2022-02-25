#include <stdio.h>
#include <math.h>

int main() {
	int x1,x2,x3,x4,x5;
	printf("Digite um valor: "); scanf("%d", &x1);
	printf("Digite outro valor: "); scanf("%d", &x2);
	printf("Digite outro valor: "); scanf("%d", &x3);
	printf("Digite outro valor: "); scanf("%d", &x4);
	printf("Digite outro valor: "); scanf("%d", &x5);
	printf("\n Os valores absolutos dos numeros digitados sao %d, %d, %d, %d, %d.", abs(x1), abs(x2), abs(x3), abs(x4), abs(x5));	
}
