#include<stdio.h>

int main(){
    int m, n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i=0; i<n; i++)
    {
        int largest_element = __WINT_MIN__,smallest_element=__INT32_MAX__;
        for(int j=0; j<n; j++)
        {
            if(a[i][j]>largest_element) largest_element=a[i][j];
            if(a[i][j]<smallest_element) smallest_element=a[i][j];
        }
        printf("largest_element %d  smallest_element %d\n",largest_element,smallest_element);
    }
    
    return 0;
}