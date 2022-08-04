#include <stdio.h>

int main()
{
      int mat[3][5], i, j, cont, cont2;
      float sumpar, sumimpar, medLinhas,medColunas, total;
      sumimpar = 0;
      sumpar = 0;
      c = 0;
      c2 = 0;
      
      for(i = 0; i < 3; i++){     
        for(j = 0; j < 5; j++){
          printf("\nDigite um numero: ");
          scanf("%i", &mat[i][j]);
          if (mat[i][j] % 2 == 0) {    
             sumpar = sumpar + mat[i][j];
             c2 = c2 + 1;
                
          }
          else {
            sumimpar = sumimpar + mat[i][j];
            c = c + 1;
          }
        }
      }
    
    
       medLinhas = sumimpar/c;
       medColunas = sumpar/c2;
    
       total = medColunas - medLinhas;
    
    
       printf("\nA diferença entre a média dos elementos das colunas pares e a média dos elementos das linhas ímpares é = %.1f", total);
}
