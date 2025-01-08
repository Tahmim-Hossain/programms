#include<stdio.h>
#include<stdlib.h>
typedef struct complex
{
    int real;
    int complex;

}comp;

void display (comp c)
{
    printf("%d ", c.real);
    printf("%d ", c.complex);
}
int main(){

    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d",i+1 );
        scanf("%d",&cnums[i].real);
        printf("%d",i+1);
        scanf("%d",&cnums[i].complex);
    }
    for(int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    
    return 0;
}