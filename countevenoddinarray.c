
#include <stdio.h>
int main() {
    int a[6] = {2, 7, 4, 9, 10, 3};
    int i, even = 0, odd = 0;
    for (i = 0; i < 6; i++) {
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even = %d\nOdd = %d", even, odd);
    return 0;
}
