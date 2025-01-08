#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<=t;i++)
    {
        int  a,b,out;
        scanf("%d %d", &a,&b);
        if(a%b==0)
        {
           printf("0"); /* code */
        }
        else
        {
        out=(b-(a%b));   
        printf("%d\n",out); 
        }
    }
    return 0;
}