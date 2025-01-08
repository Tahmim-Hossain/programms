#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
    printf("%d\n", ptr->data);
    ptr=ptr->next;
    }
}
int main()
{
    //Allocate memory for node in heap
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node * second=(struct Node *)malloc(sizeof(struct Node));
    struct Node * third=(struct Node *)malloc(sizeof(struct Node));

    //link first node to second node
    head->data = 7;
    head->next = second;


    //link third node to first node
    head->data = 8;
    head->next = third;

    head->data = 9;
    head ->next = NULL;

    //using Null declares the end of the linked list .

    linkedListTraversal(head);
    return 0;
}