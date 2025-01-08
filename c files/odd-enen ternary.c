#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);

    (a%2==0?printf("even"):printf("odd"));

    return 0;
}