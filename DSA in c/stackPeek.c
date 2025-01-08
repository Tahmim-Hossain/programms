#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
        return 1;
        else
            return 0;
}
int isFull(struct stack * ptr)
{
    if(ptr->top==ptr->size-1)
        return 1;
    return 0;
}
void push(struct stack *ptr ,int val)
{
    if(isFull(ptr))
        printf("stack overflow");
        else
        {
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
}
int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack overflow");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
    }
}
int peek(struct stack *sp,int i)
{
    int arrayInd = sp->top - i + 1;
    if( arrayInd<0) 
    {
        printf("not valid");
        return -1;
    }
    else 
    {
        return sp->arr[arrayInd];
    }
}
int main(){
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));
    struct stack *s= (struct stack*)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 43);
    for (int j = 0; j < s->top + 1;j++)
    {
        printf("%d", peek(s, j));
    }

        return 0;
}