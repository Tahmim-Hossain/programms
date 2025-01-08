#include<stdio.h>
#include<math.h>
int main()
{
    int number,digit,digitCount=0,sumofDigits=0;
    scanf("%d",&number);
    while(number!=0)
    {
        digit=number%10;
        sumofDigits=digit+sumofDigits;
        number=number/10;
        digitCount++;

    }
    printf("%d\n", digitCount);
    printf("%d\n",sumofDigits);
    return 0;
}