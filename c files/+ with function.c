#include<stdio.h>

int main(){
    int c;
    //c=sum(2,4);
    c=sum();
    printf("%d\n",c);
    return 0;
}

//int sum(int a,int b)     
int sum()
{
    int a,b, result;
    scanf("%d %d",&b,&a);
    result=a+b;
    return result;
}