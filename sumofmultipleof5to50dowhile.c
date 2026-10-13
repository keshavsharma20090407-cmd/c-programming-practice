#include <stdio.h>
int main() {
    int i = 5, sum = 0;
    do {
        sum += i;
        i += 5;
    } while (i <= 50);
    printf("Sum = %d", sum);
    return 0;
}