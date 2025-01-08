#include<stdio.h>

int main(){
    int s,n;
    scanf("%d %d",&n,&s);
    for(int i=0;i<n;i++)
    {
        
        if(i!=s)
        {
            continue;
        }
        else{
            printf("%d ",s);
        }
    }
    return 0;
}