#include <stdio.h>

int main()
{
    printf("Digite o valor da compra:\n");

    double valor;
    scanf("%lf", &valor);

    int parcelas;
    printf("Escolha a forma de pagamento:\n1 - 1 vez com desconto\n2 - 2 vezes sem desconto\n3 - n vezes com juros\n");
    scanf("%d", &parcelas);

    double pag;

    if (parcelas == 1)
    {
        pag = valor * 0.9;
        printf("Total: %.2f\n", pag);
    }
    else if (parcelas == 2)
    {
        pag = valor / 2;
        printf("Total %dx de: %.2f\n", parcelas, pag);
    }
    else
    {
        int n;
        printf("Total de parcelas:");
        scanf("%d", &n);
        double juros = 0.01;
        double calculoJuros = 1;
        for (int i = 0; i < n; i++)
        {
            calculoJuros = calculoJuros* (1 + juros);
        }
        pag = (valor * calculoJuros)/n;
        printf("Total %dx de: %.2f\n", n, pag);
    }

    return 0;
}
