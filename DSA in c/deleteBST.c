#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data) {
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->right = NULL;
    n->left = NULL;
    return n;
}

void insert(struct node *root, int data) {
    struct node *prev = NULL;
    while (root != NULL) {
        prev = root;
        if (data == root->data)
            return;
        else if (data < root->data)
            root = root->left;
        else
            root = root->right;
    }
    struct node *newNode = createNode(data);
    if (data < prev->data) 
        prev->left = newNode;
    else 
        prev->right = newNode;
}

void inOrderTraversal(struct node *root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}
struct node *inOrderPredecessor(struct node *root) 
{
    root=root->left;
    while(root->left!=NULL)
    {
        root=root->right;
    }
    return root;
}
struct node *deleteNode(struct node *root, int val)
{
    struct node *temp;
    if(root == NULL)
        return NULL;

    if(val < root->data)
        root->left = deleteNode(root->left, val);
    else if(val > root->data)
        root->right = deleteNode(root->right, val);
    else
    {
        // Case 1: No child or only one child
        if(root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }

        // Case 2: Node with two children
        temp = inOrderPredecessor(root);
        root->data = temp->data;
        root->left = deleteNode(root->left, temp->data);
    }
    return root;
}


int main() {
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    //insert(p, 7);
    deleteNode(p, 3);
    inOrderTraversal(p);
    printf("\n");

    return 0;
}