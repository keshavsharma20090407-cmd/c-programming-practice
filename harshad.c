#include <stdio.h>
int main(){
    int num,temp,sum=0;
    printf("enter a positive integer:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        sum+=temp % 10;
        temp/=10;
    }
    if(sum!=0 && num % sum == 0)
        printf("%d is a harshad number\n",num);
    else
        printf("%d is not a harshad number\n",num);
    return 0;
}
