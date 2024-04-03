#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("   #\n");
	printf("  # #\n");
	printf(" # # #\n");
	
	float area, base, altura;
	printf("\n Informe a base do triangulo: ");
	scanf("%f", &base);
	printf("\n Informe a altura do triangulo: ");
	scanf("%f", &altura);
	
		area = (base*altura)/2;
	printf("\n Area do triangulo=%.1f\n", area);
	
	system("pause");
	
	return 0;
}
