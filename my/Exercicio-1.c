//1 - Fazer um programa que pergunta um valor em metros e imprime o
//  correspondente em decímetros, centímetros e milímetros.
#include <stdio.h>

int main()
{
    int m, dm, cm, mm;
    printf("Digite um valor em metros: ");
    scanf("%d", &m);
    
    dm = m * 10;
    
    printf("Em decimetros: %d\n", dm);
    
    cm = m * 100;
    
    printf("Em centimetros: %d\n", cm);
    
    mm = m * 1000;
    
    printf("Em milimetros: %d\n", mm);

    return 0;
}
