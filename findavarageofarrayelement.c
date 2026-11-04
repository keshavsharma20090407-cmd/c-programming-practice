
#include <stdio.h>
int main() {
    int a[5]={10,25,30,15,40}, i, x, sum=0, c=0;
    scanf("%d",&x);
    for(i=0;i<5;i++)
        if(a[i]>x){sum+=a[i];c++;}
    if(c) printf("Average = %.2f",(float)sum/c);
    else printf("No matching elements");
    return 0;
}
