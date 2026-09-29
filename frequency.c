#include <stdio.h>

int main() {
    int num, digit, lastDigit;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the digit to search: ");
    scanf("%d", &digit);

    while (num != 0) {
        lastDigit = num % 10;

        if (lastDigit == digit) {
            count++;
        }

        num = num / 10;
    }

    printf("Digit %d appears %d times.\n", digit, count);

    return 0;
}