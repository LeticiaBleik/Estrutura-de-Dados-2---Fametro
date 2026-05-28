#include <stdio.h>

void ponteiros(int *a, int *b){

    *a = 10;
    *b = 20;    
}

int main (){
    int n1, n2;
  
    printf ("Digite dois numeros:\n");
    scanf ("%d %d", &n1, &n2);
    
    ponteiros (&n1, &n2);
    
    printf ("Os valores via ponteiro são %d e %d", n1, n2);

return 0;
}
