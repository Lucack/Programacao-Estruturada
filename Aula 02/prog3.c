#include <stdio.h>

int main()
{
    printf("Digite um número inteiro:\n");
    int num;
    scanf("%d", &num);
    int result = 1;

    while (num > 0){
        result *= num;
        num--;
    }
    printf("%d! = %d", num, result);
}