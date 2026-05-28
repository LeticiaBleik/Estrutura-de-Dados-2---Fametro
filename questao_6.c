#include <stdio.h>

 void contarVogaisConsoantes(char *str, int *vogais, int*consoantes){
     
     *vogais = 0;
     *consoantes = 0;
     
     while (*str != '\0'){
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
     
     printf ("Palavra: %s | Vogais: %d | Consonates: %d", palavra, vogais, consoantes);
     
     return 0;
     
 }

 
