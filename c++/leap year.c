#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&y);
    x=y/100;
    if(y%100==0)
    {
        printf("%d",x);
    }
    else{
        printf("%d",x+1);
    }
    return 0;
}