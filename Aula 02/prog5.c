#include <stdio.h>

int main() {
    int perimetro;
    int soma = 0;
    int perfeito = 0;
    int triangular = 0;

    printf("Digite o perimetro: ");
    scanf("%d", &perimetro);

    for (int i = 1; soma < perimetro; i++) {
        soma += i;
        if (soma == perimetro) {
            triangular = 1;
            break;
        }
    }

    soma = 0;
    for (int i = 1; i < perimetro; i++) {
        if (perimetro % i == 0) {
            soma += i;
        }
    }
    if (soma == perimetro) {
        perfeito = 1;
    }

    if (triangular && perfeito) {
        printf("Paz\n");
    } else if (triangular || perfeito) {
        printf("Pensar\n");
    } else {
        printf("Atacar\n");
    }

    return 0;
}
