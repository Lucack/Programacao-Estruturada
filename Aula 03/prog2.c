#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    double delta = pow(b, 2) - (4 * a * c);

    if (delta < 0 || a==0) {
        printf("Não existe raiz real\n");
    } else if (delta == 0) {
        double result;
        result = (double)(-b) / (2 * a);
        printf("A raiz é: %.2f\n", result);
    } else {
        double x1, x2;
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são: %.2f e %.2f\n", x1, x2);
    }

    return 0;
}
