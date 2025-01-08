#include<stdio.h>
int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8};
    int val,ind;
    scanf("%d %d",&ind,&val);
    for(int i=ind; i<10; i++) a[i]=a[i+1];
    a[ind]=val;
    for(int i=0; i<10; i++) printf("%d\n",a[i]);
    return 0;
}