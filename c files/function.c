#include<stdio.h>
void display();

int main(){
    int a;
    printf("initializing display\n");
    display();
    printf("display function called\n");    
    return 0;
}

void display()
{
    printf("this is display\n");
}