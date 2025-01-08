#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main(){
    int a =34;
    char b ='g';
    float d =234.354;

    struct employee e1;
    e1.code=100;
    e1.salary=34.45;
    strcpy(e1.name,"herry");
    printf("%d\n",e1.code);
    return 0;
}