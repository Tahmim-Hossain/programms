#include<stdio.h>
#include<stdlib.h>
struct Node *f = NULL;
struct Node *r = NULL;
struct Node
{
    int data;
    struct Node *next;
};
/*void enqueue(struct Node *f,struct Node *r,int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
        printf("queue is Full");
    else
    {
        n->data = val;
        n->next= NULL;
        if(f==NULL)
            f = r = NULL;
        else
        {
            r->next = n;
        r = n;
        }
    }
}*/
void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL)
        printf("queue is Full");
    else
    {
        n->data = val;
        n->next= NULL;
        if(f==NULL)
            f = r = n;
        else
        {
            r->next = n;
        r = n;
        }
    }
}
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL)
        printf("empty");
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
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
    
    linkTraversal(f);
    enqueue(32);
    enqueue(31);
    enqueue(90);
    linkTraversal(f);

    return 0;
}