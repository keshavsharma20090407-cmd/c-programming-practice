
#include <stdio.h>
int main() {
    int a[5]={2,5,8,3,6}, i, e=0, o=0;
    for(i=0;i<5;i++)
        if(a[i]%2==0) e+=a[i];
        else o+=a[i];
    printf("Difference = %d",e-o);
    return 0;
}
