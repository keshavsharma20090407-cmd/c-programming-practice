#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t,amt,CI;

    printf("Enter principal,rate,time: ");
    scanf("%f %f %f", &p, &r , &t);
    amt= p* pow((1 + r / 100),t);
    CI = amt - p;
    printf("the compound intrest = %.2f\n ",CI);
    printf("the amt = %.2f\n ",amt);
    return 0;
}