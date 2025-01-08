#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float a;
    printf("Enter your exam number:\n");
    scanf("%f",&a);
    if(a>100){
        printf("Invalid Input");
    }
    else if(80<=a && 100>=a){
        printf("You got A+");
    }
    else if(75<=a && 80>a){
        printf("You got A");
    }
    else if(70<=a && 75>a){
        printf("Yot got A-");
    }
    else if(65<=a && 70>a){
        printf("You got B+");
    }
    else if(60<=a && 65>a){
        printf("You got B");
    }
    else if(55<=a && 60>a){
        printf("You got B-");
    }
    else if(50<=a && 55>a){
        printf("You got C+");
    }
    else if(45<=a && 50>a){
        printf("You got C");
    }
    else if(40<=a && 45>a){
        printf("You got D");
    }
    else if(0<=a && 40>a){
        printf("You got F");
    }
    else if(0>a){
        printf("Invalid Input");
    }
    return 0;
}