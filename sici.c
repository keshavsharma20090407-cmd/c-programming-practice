#include <stdio.h>
int main() {
    float p, r, t,SI;

    printf("Enter principal,rate,time: ");
    scanf("%f %f %f", &p, &r , &t);
    SI=(p*t*r)/100;
    printf("the simple interst= %.2f\n ",SI);
    return 0;
} 

