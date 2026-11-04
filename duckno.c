
#include <stdio.h>
int main() {
    int n, found = 0;
    scanf("%d", &n);
    while (n > 0) {
        if (n % 10 == 0) found = 1;
        n /= 10;
    }
    if (found) printf("Duck Number");
    else printf("Not Duck");
    return 0;
}
