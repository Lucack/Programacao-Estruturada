#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    int i = n - 1;

    while (count < 3) {
        int num = i;
        int divisor_count = 0;

        for (int j = 1; j <= num; j++) {
            if (num % j == 0) {
                divisor_count++;
            }
        }

        if (divisor_count == 2) {
            printf("%d ", num);
            count++;
        }
        i--;
    }

    return 0;
}
