#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *insertAtFirst(struct Node *head,int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while(p->next!=head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}
void linkTraversal(struct Node *head)
{
    struct Node *ptr = head;
    printf("%d  ", ptr->data);
    ptr = ptr->next;
    while(ptr!=head)
    {
    printf("%d  ", ptr->data);
    ptr = ptr->next;
    }
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 6;
    second->next = third;
    third->data = 9;
    third->next = forth;
    forth->data = 43;
    forth->next = head;
    head = insertAtFirst(head, 58);
    linkTraversal(head);

    return 0;
}