#include <stdio.h>

int main()
{
    printf("Digite sua nota:");
    int nota;
    char conceito;
    scanf("%d", &nota);

    if (nota >= 8.5)
    {
        printf("Conceito A - desempenho excepcional");
    }
    else if (nota >= 7 && nota < 8.5)
    {
        printf("Conceito B - bom desempenho");
    }
    else if (nota >= 6 && nota < 7)
    {
        printf("Conceito C - desempenho adequado");
    }
    else if (nota >= 5 && nota < 6)
    {
        printf("Conceito D - desempenho mínimo");
    }
    else
    {
        printf("Conceito F - reprovado");
    }

    return 0;
}