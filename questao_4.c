#include <stdio.h>

void dobrar (int *a) {
	*a = *a * 2;
}

int main () {
	int n1;

	printf ("Digite um numero:\n");
	scanf ("%d", &n1);

	dobrar(&n1);

	printf("O dobro é:%d\n", n1);

	return 0;
}
