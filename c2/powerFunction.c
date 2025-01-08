#include<stdio.h>
long long int power(int x, int n)
{
    long long int result = 1;
    for(int i = 0; i < n; i++)
    {
        result = result * x;
    }
    return result;
}
int main(){
    int x, n;
    scanf("%d %d",&x,&n);
    printf("%lld\n", power(x, n));
    return 0;
}