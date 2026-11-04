
#include <stdio.h>
int main() {
    int n, cube, t;
    scanf("%d", &n);
    cube = n * n * n;
    t = n;
    while (t > 0) {
        if (t % 10 != cube % 10) break;
        t /= 10;
        cube /= 10;
    }
    if (t == 0) printf("Trimorphic");
    else printf("Not Trimorphic");
    return 0;
}
