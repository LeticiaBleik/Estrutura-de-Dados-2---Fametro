#include <stdio.h>

void inversao (char *str) {

	char * inicio = str;
	char * fim = str;

	while (*fim != '\0') {
		fim ++;
	}
	fim --;

	while (inicio<fim) {

		char temporaria = *inicio;
		*inicio = *fim;
		*fim = temporaria;

		inicio ++;
		fim --;
	}
}

int main () {
	char palavra[100];

	printf ("Digite uma palavra:\n");
	scanf ("%s", palavra);

	inversao (palavra);

	printf ("A palavra fica:%s", palavra);

	return 0;

}


