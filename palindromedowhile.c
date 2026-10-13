#include <stdio.h>

int main() {
    int num, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    if (num < 0) {
        printf("%d is not a palindrome number.\n", num);
        return 0;
    }

    do {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    } while (num != 0);

    if (original == reverse) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}