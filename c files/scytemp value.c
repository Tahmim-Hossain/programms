#include<stdio.h>
#include<string.h>
int main(){
    char s1[45]="hello";
    char *s2 ="hellz";  //s1-s2 ; if s1>s2 the value is negative.
    int val =strcmp(s1,s2);
    printf("%d",val); // the out put is integer type so the output will ne a value in numbers. 
    return 0;
}