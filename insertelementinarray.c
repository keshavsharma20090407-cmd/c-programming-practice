
#include <stdio.h>
int main() {
    int a[10] = {10,20,30,40,50};
    int n = 5, i, pos = 3, val = 25;
    for (i = n; i >= pos; i--)
        a[i] = a[i-1];
    a[pos-1] = val;
    n++;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
