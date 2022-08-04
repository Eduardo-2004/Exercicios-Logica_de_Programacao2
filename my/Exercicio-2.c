#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("\n%d em octal: %o\n", n, n);
    printf("%d em hexadecimal: %X\n\n", n, n);

    return 0;
}
