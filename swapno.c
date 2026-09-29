#include<stdio.h>
int main() {
    int a ,b;
    printf("enter the value of a and b :");
    scanf("%d%d",&a,&b);
    printf("befoer swapping a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swpping a=%d b=%d\b",a,b);
    return 0;
}