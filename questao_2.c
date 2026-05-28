#include <stdio.h>

void encontrarMaiorMenor(int*array, int tamanho, int *maior, int *menor) {

	*maior = array[0];
	*menor = array[0];

	for (int i = 1; i < tamanho; i ++) {

		if (array[i] > *maior) {
			*maior = array[i];
		} else if(array[i] < *menor) {
			*menor = array[i];
		}
	}
}

int main() {
	int numeros[5], i;
	int maior, menor;

	printf ("Digite 5 números:\n");

	for (i = 0; i < 5; i++) {
		scanf ("%d", &numeros[i]);

	}

	encontrarMaiorMenor (numeros, 5, &maior, &menor);

	printf ("O maior número é %d, e o menor é %d.", maior, menor);

	return 0;
}
