#include<stdio.h>
int main()
{
    int a=1;
    do{
        if(a==3) break;
        printf("%d",a);
        a++;
    }
    while(a<=10);
    return 0;
    }