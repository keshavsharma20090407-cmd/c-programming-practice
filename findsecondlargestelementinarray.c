
#include <stdio.h>
int main() {
    int a[5] = {12, 25, 8, 40, 30};
    int i, max = a[0], second = -1;

    for (i = 1; i < 5; i++) {
        if (a[i] > max) {
            second = max;
            max = a[i];
        } else if (a[i] > second && a[i] < max) {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);
    return 0;
}
