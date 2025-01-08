#include<stdio.h>

int main(){
    int m, n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    int sum=0,sum2=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                sum = sum + a[i][j];
            
            if(j==n-i)
            sum2 = sum2 + a[i][j];
            //printf("%d",a[i][j]);
        }

    }
    printf("%d %d",sum,sum2);
    return 0;
}