
//5 - Fazer um programa em "C" que lê o preço de um produto e inflaciona esse 
//preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.


#include <stdio.h>

int main()
{
    float produto;
    
    
    printf("Digite o preÃ§o do produto: ");
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
