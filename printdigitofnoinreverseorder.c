#include <stdio.h>
int main() {
    int n, digit;
    scanf("%d", &n);
    do {
        digit = n % 10;
        printf("%d ", digit);
        n /= 10;
    } while (n != 0);
    return 0;
}