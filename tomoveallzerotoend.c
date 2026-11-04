
#include <stdio.h>
int main() {
    int a[6]={0,2,0,4,5,0}, i, j=0;
    for(i=0;i<6;i++)
        if(a[i]!=0) a[j++]=a[i];
    while(j<6) a[j++]=0;
    for(i=0;i<6;i++) printf("%d ",a[i]);
    return 0;
}
