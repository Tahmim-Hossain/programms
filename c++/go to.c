#include<stdio.h>

int main(){
    int sum=0;
    int digit,num=456;
    flag:
    digit=num%10;
    sum=sum+digit;
    num=num/10;
    if(num!=0)
    {
        goto flag;
    }
    printf("%d",sum);
    return 0;
}