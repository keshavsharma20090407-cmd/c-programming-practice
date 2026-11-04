
#include <stdio.h>
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int i, key, found = 0;
    scanf("%d", &key);
    for (i = 0; i < 5; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }
    if (found) printf("Found");
    else printf("Not Found");
    return 0;
}
