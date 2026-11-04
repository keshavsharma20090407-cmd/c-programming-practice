
#include <stdio.h>
int main() {
    int a[4] = {2, 4, 6, 8};
    int b[4] = {4, 5, 8, 9};
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
    return 0;
}
