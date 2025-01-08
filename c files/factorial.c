#include<stdio.h>
int factorial( int x)
{
    if(x==1||x==0)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}

int main(){
    int c,y;
    scanf("%d",&y);
    c = factorial(y);
    printf("%d\n",c);
    return 0;
}

