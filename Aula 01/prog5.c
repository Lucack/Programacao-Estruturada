#include <stdio.h>

int main() {
    int x;
    float y;
    scanf("%d",&x);
    y = x*x - (2*x) + 3;

    printf("%.2f", y);
    return 0;
}