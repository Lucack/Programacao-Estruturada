#include <stdio.h>
#include <math.h>

float somaDivisores(int n);
int inteiroPositivo(int n);

int main()
{
    int n = 5;
    float temp;
    int num;

    for (int i = 1; i <= n; i++)
    {
        printf("Digite o  %d número:\n", i);
        scanf("%f", &temp);
        if (num != -1)
        {
            num = inteiroPositivo(temp);
                    printf("A soma dos divisores: %.0f\n", somaDivisores(num));


            
        }
        else
        {
            i--;
        }
    }
}

int inteiroPositivo(int n)
{
    if (n >= 0)
    {
        return n;
    }
    else
    {
        return -1;
    }
}

float somaDivisores(int n)
{
    float sum = 0;
    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0) 
        {
            sum += i;
        }
    }
    return sum; 
}