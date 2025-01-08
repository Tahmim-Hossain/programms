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
    int flag=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                {
                    if(a[i][j]!=1)
                        {
                            flag=1;
                        }
                }
            // else if(j==n-i)
            // {
            //     if(a[i][j]!=1)
            //             {
            //                 flag=1;
            //             }
            // }
            else 
            {
                if(a[i][j]!=0) flag=1;
            }
        }
    }
    if(flag) printf("Not identity");
    else printf("identity");
    return 0;
}