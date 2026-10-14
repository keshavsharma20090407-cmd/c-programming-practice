#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);

    do {
        if ((n % 10) % 2 == 0) count++;
        n /= 10;
    } while (n != 0);

    printf("%d", count);
    return 0;
}