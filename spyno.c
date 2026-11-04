
#include <stdio.h>
int main() {
    int n, d, sum = 0, prod = 1;
    scanf("%d", &n);
    while (n > 0) {
        d = n % 10;
        sum += d;
        prod *= d;
        n /= 10;
    }
    if (sum == prod) printf("Spy Number");
    else printf("Not Spy");
    return 0;
}
