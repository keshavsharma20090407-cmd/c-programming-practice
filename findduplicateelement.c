
#include <stdio.h>
int main() {
    int a[6]={2,4,3,2,5,4}, i, j;
    for(i=0;i<6;i++){
        for(j=0;j<i;j++)
            if(a[i]==a[j]) break;
        if(j==i)
            for(j=i+1;j<6;j++)
                if(a[i]==a[j]) {
                    printf("%d ",a[i]);
                    break;
                }
    }
    return 0;
}
