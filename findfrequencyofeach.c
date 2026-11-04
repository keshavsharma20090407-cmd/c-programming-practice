
#include <stdio.h>
int main() {
    int a[6]={2,3,2,4,3,2}, i, j, c;
    for(i=0;i<6;i++){
        for(j=0;j<i;j++)
            if(a[i]==a[j]) break;
        if(j<i) continue;
        c=0;
        for(j=0;j<6;j++)
            if(a[i]==a[j]) c++;
        printf("%d occurs %d times\n",a[i],c);
    }
    return 0;
}
