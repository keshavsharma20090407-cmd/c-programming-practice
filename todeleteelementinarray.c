
#include <stdio.h>
int main() {
    int a[5] = {10,20,30,40,50};
    int i, pos = 2, n = 5;
    for (i = pos-1; i < n-1; i++)
        a[i] = a[i+1];
    n--;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
