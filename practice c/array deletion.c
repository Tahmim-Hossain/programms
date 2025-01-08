#include<stdio.h>
int main()
{
    int i,x,j,n,index,loc=-1,temp,element;
    printf("enter the capacity of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the value of the array: ");
    scanf("%d",&x);
    printf("enter the elements of the array: ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    printf("enter element you want to delete: ");
    scanf("%d",&element);
    for(i=0;i<x;i++)
    {
    if(a[i]==element)
    {
        index=i;
        break;
    }
    }
    if(index<0 || index>x-1)
    {
        printf("invalid index");
    }
    else
    {
            for(i=index;i=x-1;i++)
            {
                a[i]=a[i+1];
            }
            x=x-1;
            for(i=0;i=x;i++)
    {
        printf("%d",a[i]);
    }
    }
    return 0;
}