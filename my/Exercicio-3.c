#include <stdio.h>
#include <math.h>
int main()
{
    float n1, n2, soma, quad1, quad2, prod, somaQuad, raiz, mod, sub;

   //a) 
    printf("Digite o primeiro numero:");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero:");
    scanf("%f", &n2);
    
    soma = n1 + n2;    
    
    printf("Soma = %0.2f\n", soma);
    
    //b)
    
    quad2 = n2 * n2;
    
    printf("Quadrado do 2Â° numero: %0.2f\n", quad2);
    
    prod = n1 * (quad2);
    
    printf("O produto do primeiro nÃºmero pelo quadrado do segundo = %0.2f\n", prod);
    
    //c)
    quad1 = n1 * n1;
    
    printf("Quadrado do 1° numero = %0.2f\n", quad1);
    
    //d)
    somaQuad = quad1 + quad2;
    raiz = sqrt(somaQuad);
    printf("A raiz quadrada da soma dos quadrados = %0.2f\n", raiz);
    
    //e)
    
    sub = n1 - n2;
    
    printf("Seno = %f\n", sin(sub));
    
    
    
    //f)
    
    if(n1 > 0) {
        
        mod = n1 * (-1);
        
        printf("Modulo: [%.0f]", mod);
        
    }
    else if(n1 < 0){
        
        mod = n1 * (+1);
        printf("MÃ³dulo: [%.0f]", mod);
        
    }
    
    return 0;
}
