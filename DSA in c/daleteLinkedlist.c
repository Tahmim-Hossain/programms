#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *deleteAtIndex(struct Node *head,int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1;i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    return head;
}
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    return head;
}
struct Node *deleteKey(struct Node *head,int key)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=key && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data==key)p->next = q->next;
    return head;
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
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 6;
    second->next = third;
    third->data = 9;
    third->next = fourth;
    fourth->data = 32;
    fourth->next = NULL;
    //head=deleteFirst(head);
    //head = deleteAtIndex(head, 2);
    //head = deleteAtLast(head);
    head = deleteKey(head, 9);
    linkTraversal(head);

    return 0;
}
