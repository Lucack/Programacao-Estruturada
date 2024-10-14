#include <stdio.h>
#include <math.h>

double fatorial(int n){
    if (n <= 1) {
        return 1; 
    }
    return n*fatorial(n-1);
}


int main() {
    int num;
    scanf("%d ", &num);
    double soma = 0;
    for (int i = 0; i<=num ; i++){
        soma += 1/fatorial(i);

    }
    printf("%lf",soma);

    

    return 0;
}

