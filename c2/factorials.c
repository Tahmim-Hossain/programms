#include<stdio.h>

int main(){
    int n,res=1;
    scanf("%d",&n);
    while(n!=0)
    {
        res = res * n;
        n--;
    }
    printf("%d\n", res);

    return 0;
}