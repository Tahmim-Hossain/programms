#include<stdio.h>
int main()
{
    char gender,qualifications;
    float experiance;

    printf("enter the gender: ");
    scanf("%c",&gender);
    printf("enter the qualifications: ");
    scanf("%c",&qualifications);
    printf("enter the experiance: ");
    scanf("%f",&experiance);

    printf("%c %c %f",gender,qualifications,experiance);

    return 0;
}

