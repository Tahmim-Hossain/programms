#include<stdio.h>
#include<math.h>
int main()
{
    float num1,num2,result;
    char op;
    printf("enter the number 1:");
    scanf("%f",&num1);
    printf("enter the number 2:");
    scanf("%f",&num2);
    printf("enter the operation (+,-,*,/): ");
    scanf(" %c",&op);  //a space has to be provided;
    if(op=='+')
    {
        goto addlbl;
    }
    else if(op=='-')
    {
        goto sublbl;
    }
    else if(op=='*')
    {
        goto multlbl;
    }
    else if(op=='/')
    {
        goto divlbl;
    }
    else 
    {
        printf("unknown op");
        exit(0);
    }
    addlbl:
    result=num1+num2;
    goto resultlbl;
    sublbl:
    result=num1-num2;
    goto resultlbl;
    multlbl:
    result=num1*num2;
    goto resultlbl;
    divlbl:
    result=num1/num2;
    goto resultlbl;
    resultlbl:
    printf("%f",result);
    return 0;

}



