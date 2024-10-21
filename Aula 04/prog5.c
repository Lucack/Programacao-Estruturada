#include <stdio.h>
#include <math.h>

int funcaoT(int num);

int main()
{
    int num;
    printf("Digite o valor de N:\n"); 
    scanf("%d", &num); // input do usuario, salvando em num o INT
    printf("%d",funcaoT(num)); // print de saida como no enunciado
    
}

int funcaoT (int num) // implementa'cao da recursao
{
    if (num > 0 && num < 10){
        return 10; // caso base de num<10 da fun'cao
    }
     else{ 
        return funcaoT(num/5) + funcaoT((7*num / 10) +1 ) + num; 
        // calculo recursivo, para n>=10, chamando T conforme no enunciado e retornando o valor para ser somado
    }
}