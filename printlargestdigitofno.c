#include <stdio.h>
int main() {
    int n, max = 0;
    scanf("%d", &n);

    do {
        if (n % 10 > max) max = n % 10;
        n /= 10;
    } while (n != 0);

    printf("%d", max);
    return 0;
}