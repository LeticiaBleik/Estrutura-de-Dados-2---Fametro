#include <stdio.h>

 void contarVogaisConsoantes(char *str, int *vogais, int*consoantes){

   // Inicializa os contadores
     *vogais = 0;
     *consoantes = 0;
     
     while (*str != '\0'){
      // Verifica se a letra é vogal
         if (*str == 'a' || *str =='e'|| *str == 'i'|| *str == 'o'|| *str == 'u'||
         *str == 'A'|| *str == 'E'|| *str == 'I'|| *str == 'O'|| *str == 'U'){
         (*vogais)++;
         } else {
            (*consoantes)++;
         }
         str ++;
         }
     }
 int main (){
     char palavra[100];
     int consoantes, vogais;
     
     printf ("Digite uma palavra:\n");
     scanf ("%s", palavra);
     
     contarVogaisConsoantes (palavra, &vogais, &consoantes);
     
     printf ("Palavra: %s | Vogais: %d | Consoantes: %d", palavra, vogais, consoantes);
     
     return 0;
     
 }

 
