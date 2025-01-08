#include<stdio.h>
int main()
{
    char cha;
    printf("enter the value of cha:");
    scanf("%c", &cha);
   // printf("%d",cha);

   if(cha>=48 && cha<=57)
   {
    printf("digit!");
   }
    else if(cha>=65 && cha<=90)
    {
        printf("uppercase!");
    }
   else if(cha>=97 && cha<=122)
   {
    printf("lowercase!");
   }
   else
   {
    printf("other characters !");
   }

   return 0;
}