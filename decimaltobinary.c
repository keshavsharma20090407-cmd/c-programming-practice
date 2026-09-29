#include <stdio.h>

int main() {
    int decimal;
    long long binary = 0;
    long long place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int temp = decimal;
    while (temp > 0) {
        binary += (temp % 2) * place;
        place *= 10;
        temp /= 2;
    }

    printf("Binary of %d = %lld\n", decimal, binary);

    return 0;
}