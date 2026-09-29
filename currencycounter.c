#include <stdio.h>

int main() {
    int amount, notes;

    printf("Enter amount: ");
    scanf("%d", &amount);

    notes = amount / 500;
    amount %= 500;
    printf("500 x %d\n", notes);

    notes = amount / 100;
    amount %= 100;
    printf("100 x %d\n", notes);

    notes = amount / 50;
    amount %= 50;
    printf("50 x %d\n", notes);

    notes = amount / 20;
    amount %= 20;
    printf("20 x %d\n", notes);

    notes = amount / 10;
    amount %= 10;
    printf("10 x %d\n", notes);

    notes = amount / 5;
    amount %= 5;
    printf("5 x %d\n", notes);

    printf("1 x %d\n", amount);

    return 0;
}