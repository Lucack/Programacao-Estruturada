#include <stdio.h>

int compara(int a, int b); // assinatura da função ou protótipo da função

int main()
{
    int a, b;
    printf("Digite dois valores:");

    scanf("%d %d", &a, &b);

    printf("O menor número eh %d.", compara(a, b));

    // chamada ou invocação da função
}

int compara(int a, int b)
{
    // comandos
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
