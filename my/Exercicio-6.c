#include <stdio.h>
//6 - Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor
//valores lidos.

                        //garantir ao menos uma troca                    
int vet[10], i, menor = 10000, maior = 0, n1;

int main(){
    
    
    for(i = 1; i <= 10; i++){
        printf("Digite %d° numero: ", i);
        scanf("%i",&vet[i]);

    }

    for(i = 1; i <= 10; i++){
        if(maior < vet[i]){
            maior = vet[i];
        }
        if(menor > vet[i]){
            menor = vet[i];
       }
        
    }
    printf("O MAIOR VALOR DESTA LISTA EH: %d \n", maior);
    printf("O MENOR VALOR DESTA LISTA EH: %d", menor);

    return 0;
    
}
