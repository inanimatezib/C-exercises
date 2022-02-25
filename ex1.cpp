#include <stdio.h>

int x1,x2;

int main() {
	printf("Digite um valor: "); scanf("%d", &x1);
	printf("Digite outro valor: "); scanf("%d", &x2);
	if (x1 > x2) {
		printf("\n O maior numero e %d.", x1);
	} else if (x2 > x1) {
		printf("\n O maior numero e %d.", x2);
	} else if (x1 == x2) {
		printf("\n Os valores sao iguais.");
	}
}
