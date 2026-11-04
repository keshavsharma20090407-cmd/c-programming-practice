
#include <stdio.h>
int main() {
    int a[5] = {12, 5, 30, 8, 17};
    int i, max = a[0], min = a[0];
    for (i = 1; i < 5; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Max = %d\nMin = %d", max, min);
    return 0;
}
