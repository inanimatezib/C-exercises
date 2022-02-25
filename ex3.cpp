#include <stdio.h>
#include <math.h>

int main() {
	double x1,x2,res;
	printf("Digite o valor de x1: "); scanf("%lf", &x1);
	printf("Digite o valor de x1: "); scanf("%lf", &x2);
	res = pow(x1, x2);
	printf("Resultado: %lf", res);
}
