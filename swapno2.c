#include<stdio.h>
int main() {
    int a, b, temp=0;
    printf("enter the value of a and b :");
    scanf("%d %d",&a,&b);
    //optional swappping using temp variable
    printf("before swapping a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping a=%d b=%d\n",a,b);
    return 0;
}