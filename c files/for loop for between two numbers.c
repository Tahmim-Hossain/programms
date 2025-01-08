#include<stdio.h>

int main(){
    float loopCount = 0;
    float a,b,sum=0,i=0;
    scanf("%f %f",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum=sum+i;
        loopCount++;
    }
    printf("%f\n",sum/loopCount);

    return 0;
}
