#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int inver = 0;

    while (num > 0) {
        inver = inver * 10 + (num % 10);
        num /= 10;
    }

    printf("%d", inver);
    
    return 0;
}
