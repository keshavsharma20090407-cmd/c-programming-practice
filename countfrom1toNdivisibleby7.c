#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        if (i % 7 == 0) count++;

    printf("%d", count);
    return 0;
}