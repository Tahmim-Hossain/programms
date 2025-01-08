#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int year;
printf("Enter the year.");
scanf("%d",&year);
if(year%100==0 && year%400==0){
        printf("\nIt is a leap year.");
    }
else if(year%100!=0 && year%4==0){
    printf("\nIt is leap year.");
}
else{
    printf("Not leap year.");
}
    return 0;
    }