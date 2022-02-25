#include <stdio.h>
#include <math.h>

int main() {
	double x1,x2,y1,y2,res;
	printf("Digite o valor de x1: "); scanf("%lf", &x1);
	printf("Digite o valor de y1: "); scanf("%lf", &y1);
	printf("Digite o valor de x2: "); scanf("%lf", &x2);
	printf("Digite o valor de y2: "); scanf("%lf", &y2);
	res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("A distancia entre os pontos e %lf.", res);
}
