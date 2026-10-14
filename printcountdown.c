#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if (n >= 1) {
        do {
            printf("%d ", n--);
        } while (n >= 1);
    }
    return 0;
}