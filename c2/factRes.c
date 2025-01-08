#include<stdio.h>
int rec(int n)
{
    //int res=1;
    if(n==0)
        return 1;
    else 
    return n * rec(n-1);;
}
int main(){
    int n;
    scanf("%d",&n);
    int y=rec(n);
    printf("%d\n",y);
    return 0;
}