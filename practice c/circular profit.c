#include<stdio.h>
#include<math.h>
int main()
{
    float p,n,r;
    scanf("%f %f %f",&p,&n,&r);
    for(int i=0;i<n;i++)
    {
        float net=(p*n*r)/100;
        printf("%f\n",net);
    }
    return 0;
}