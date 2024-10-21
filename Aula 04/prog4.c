#include <stdio.h>
#include <math.h>

int decideSePrimo(int num, int div);

int main()
{
    int num;
    printf("Digite um valor inteiro\n");
    scanf("%d", &num);

    if (decideSePrimo(num, num - 1) == 1)
    {
        printf("O número %d é primo.", num);
    }
    else
    {
        printf("O número %d não é primo.", num);
    }
}

int decideSePrimo(int num, int div)
{
    if (div == 1)
    {
        return 1;
    }
    else if (num % div == 0)
    {
        return 0;
    }
    else
    {
        return decideSePrimo(num, div - 1);
    }
}