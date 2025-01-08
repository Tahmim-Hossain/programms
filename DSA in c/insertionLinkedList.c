#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
    printf("%d  ", ptr->data);
    ptr = ptr->next;
    }
}
struct Node * insertAtHead(struct Node * head,int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct Node *insertAtIndex(struct Node *head,int data,int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while(i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node * insertAtEnd(struct Node * head,int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 6;
    second->next = third;
    third->data = 9;
    third->next = NULL;
    //head = insertAtHead(head, 59);
    //head = insertAtIndex(head, 56, 3);
    head = insertAtEnd(head, 52);
    linkTraversal(head);

    return 0;
}