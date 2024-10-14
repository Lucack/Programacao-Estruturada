#include <stdio.h>

int main()
{
    printf("Digite um número inteiro:\n");
    int num;
    scanf("%d", &num);
    int count = 0;

    for (int i = 1; num >= i; i++){
        double resto = num % i;
        if (resto == 0){
            printf("O número %d é divisível por  %d.\n", num, i);
            count++;
        }
        
        if (count == 2 && i == num){
            printf("O número %d é primo.", num);
        }
    }
    return 0;
}