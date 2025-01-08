#include<stdio.h>

int main(){
    char s[34];
    printf("enter you name: ");
    scanf("%s", s);
    gets(s);  //to put the entered charecter to the string and to store it to the value.
    puts(s);   //to put the curser to the next line.
    printf("your name is %s\n", s);
    return 0;
}