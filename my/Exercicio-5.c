
//5 - Fazer um programa em "C" que l� o pre�o de um produto e inflaciona esse 
//pre�o em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.


#include <stdio.h>

int main()
{
    float produto;
    
    
    printf("Digite o preço do produto: ");
    scanf("%f", &produto);

    if(produto < 100){
        
        produto = (produto + (produto * 0.1));
        
        printf("Produto inflacionado em 0.1 = R$ %0.2f ", produto);
        
    } else if(produto >= 100){
        
        produto = (produto + (produto * 0.2));
        printf("Produto inflacionado em 0.2 = R$ %0.2f ", produto);
        
    } 


    return 0;
}
