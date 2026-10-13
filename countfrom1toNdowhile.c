#include <stdio.h>
int main() {
    int n, i = 1, count = 0;
    scanf("%d", &n);
    do {
        count++;
        i++;
    } while (i <= n);
    printf("Count = %d", count);
    return 0;
}