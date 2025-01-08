#include<stdio.h>
int main()
{char cha;
printf("Enter the cha:");
scanf("%c", &cha);
int result;

result=(cha=='a'?0:1);
printf("%d", result);
return 0;
}