#include <stdio.h>
int main() {
    int n, p = 1;
    scanf("%d", &n);

    do {
        p *= n % 10;
        n /= 10;
    } while (n != 0);

    printf("%d", p);
    return 0;
}