#include <stdio.h>

int main() {
    int n;
    float sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of series = %.4f\n", sum);

    return 0;
}