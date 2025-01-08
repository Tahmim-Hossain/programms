#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    char g,q;
    float a;
printf("Enter gender, qualification, experience\n");
scanf("%c %c %f",&g,&q,&a);
if(g=='m' && q=='p' && a>=10){
    printf("Salary is 11000");
}
else if((g=='m' && q=='g' && a>=10)||(g=='m' && q=='p' && a<10)||(g=='f' && q=='p' && a<10)){
    printf("Salary is 10000");
}
else if(g=='m' && q=='g' && a<10){
    printf("Salary is 7000");
}
else if(g=='f' && q=='p' && a>=10){
    printf("Salary is 12000");
}
else if(g=='f' && q=='g' && a>=10){
    printf("Salary is 9000");
}
else if(g=='f' && q=='g' && a<10){
    printf("Salary is 6000");
}
    return 0;
}