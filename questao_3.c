#include <stdio.h>

int main() {
	int n1;
	int *troca;
	
	printf("Digite o valor da variável:\n");
	scanf("%d", &n1);
	
	troca = &n1;

	printf ("O valor da variável é:%d\n", n1);
    printf ("O endereço da variável é: %p\n", &n1);
    printf ("O valo do ponteiro é: %p\n", troca);
    printf ("O valor via ponteiro é: %d\n", *troca);

	return 0;
}
