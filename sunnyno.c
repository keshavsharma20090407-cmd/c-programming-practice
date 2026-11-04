
#include <stdio.h>
int main() {
    int n, i, found = 0;
    scanf("%d", &n);
    for (i = 1; i * i <= n + 1; i++)
        if (i * i == n + 1) found = 1;
    if (found) printf("Sunny Number");
    else printf("Not Sunny");
    return 0;
}
