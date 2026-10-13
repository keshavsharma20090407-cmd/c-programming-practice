#include <stdio.h>
int main() {
    int password;
    do {
        printf("Enter password (1234): ");
        scanf("%d", &password);
    } while (password != 1234);
    printf("Correct password!");
    return 0;
}