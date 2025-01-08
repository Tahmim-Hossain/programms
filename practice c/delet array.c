#include<stdio.h>
int main()
{
    int a[10]={0,1,2,3,4,5,6,7};
    int ind;
    scanf("%d",&ind);
    for(int i=ind; i<10; i++) a[i]=a[i+1];
    for(int i=0; i<10; i++) printf("%d",a[i]);
    return 0;
}