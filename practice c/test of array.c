#include<stdio.h>
int main()
{
    int x,i,j,n,loc=-1,element,temp;
    printf("enter the capacity of the array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the value of the array :");
    scanf("%d",&x);
    printf("enter the elements of the array :");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }

    /*for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }*/
    printf("enter the element that you want to search:");
    scanf("%d", &element);
    int start,end,mid;
    start=0;end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if( a[mid]==element)
        {
            loc=mid;
            break;
        }
        else if(element>a[mid])
        {
            start=mid+1;
        }
        else if(a[mid]>element)
        {
            end=mid-1;
        }
    }
    if(loc==-1)
    {
        printf("element not found");

    }
    else
    {
        printf("the index of the element is %d",loc);
    }
    return 0;
}