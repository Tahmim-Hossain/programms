#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
int isEmpty(struct Node * top)
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
int isFull (struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if(p==NULL)
        return 1;
    else
        return 0;
}
struct Node *push(struct Node *top,int val)
{
    if(isFull(top))
        printf("stack overflow");
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        top = n;
        return top;
        }
}
int pop(struct Node **top)
{
    if(isEmpty(top))
        printf("stack underflow");
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
        }
} 
int peek(struct Node *top,int pos)
{
    struct Node *ptr = top;
    for (int i = 0;(i<pos-1  && ptr!=NULL);i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL)
        return ptr->data;
    else
        return -1;
}
void linkTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
    printf("%d  ", ptr->data);
    ptr = ptr->next;
    }
}
int main(){
    struct Node *top = NULL;
    top = push(top, 76);
    top = push(top, 43);
    top = push(top,33);
    int element = pop(&top);
    linkTraversal(top);
    printf("popped element\n");
    printf("%d\n", element);

    return 0;
}