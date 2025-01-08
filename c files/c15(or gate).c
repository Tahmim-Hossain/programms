#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int a,b;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
if(a<=10 || b>=20){
    printf("The condition is fulfilled");
}
else{
    printf("Sorry!! You haven't fulfiled the condition");
}
    return 0;
}