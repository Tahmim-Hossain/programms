#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnoon();
int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("Good morning\n");
    goodafternoon();
}
void goodafternoon()
{
    printf("Afternoon\n");
    goodnoon();
}

void goodnoon()
{
    printf("Good noon\n");
}
