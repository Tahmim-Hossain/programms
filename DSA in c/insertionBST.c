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

void inorderTraversal(struct node *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
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

    insert(p, 7);

    inorderTraversal(p);
    printf("\n");

    return 0;
}
