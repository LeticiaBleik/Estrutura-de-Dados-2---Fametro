#include <stdio.h>

void copiarString(char *origem, char *destino) {
	while (*origem != '\0') {
		*destino = * origem;
		origem ++;
		destino ++;
	}
	*destino = '\0';

}

int main () {
	char plv1[100], plv2[100];

	printf("Digite uma palavra:\n");
	scanf ("%s", &plv1);

	copiarString (plv1, plv2);

	printf ("A palavra original e a palavra copiada são:%s e %s\n", plv1, plv2);

	return 0;
}
