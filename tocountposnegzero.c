
#include <stdio.h>
int main() {
    int a[6] = {-2, 0, 5, -1, 0, 8};
    int i, p = 0, n = 0, z = 0;
    for (i = 0; i < 6; i++) {
        if (a[i] > 0) p++;
        else if (a[i] < 0) n++;
        else z++;
    }
    printf("Positive=%d Negative=%d Zero=%d", p, n, z);
    return 0;
}
