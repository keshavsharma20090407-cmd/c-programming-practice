#include <stdio.h>

int main() {
    int num, square, temp, digits = 1;
    int divisor;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }

    divisor = 1;

    for (int i = 1; i <= digits; i++) {
        divisor = divisor * 10;
    }

    if (square % divisor == num) {
        printf("%d is an Automorphic number.\n", num);
    } else {
        printf("%d is not an Automorphic number.\n", num);
    }

    return 0;
}