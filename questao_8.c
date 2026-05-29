#include <stdio.h>

void calculadora (float a, float b, float * soma, float * sub, float *multi, float *divisao) {

	// operações
	*soma = a + b;
	*sub = a - b;
	*multi = a * b;
	*divisao = a / b;

}

int main () {
	float n1, n2, soma, sub, multi, divisao;

	printf ("Digite dois números:\n");
	scanf ("%f %f", &n1, &n2);

	calculadora (n1, n2, &soma, &sub, &multi, &divisao);

	// Coloquei vários floats porquê queria que deixar mais organizado no terminal passando a ideia de cálculo (Ex: 2+2 = 4)
	printf("RESULTADO\n%.1f + %.1f = %.1f\n%.1f - %.1f = %.1f\n%.1f * %.1f = %.1f\n%.1f / %.1f = %.2f", n1,n2, soma, n1, n2, sub, n1, n2, multi, n1, n2, divisao);

	return 0;
}
