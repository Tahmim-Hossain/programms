#include<stdio.h>
int getsum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
}
int main(){
    int c=getsum();
    printf("%d\n",c);
    
    return 0;
}