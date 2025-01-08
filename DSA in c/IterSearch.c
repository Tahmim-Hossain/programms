#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->right = NULL;
    n->left = NULL;
    return n;
}

void inOrder(struct node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
struct node *searchIter(struct node *root,int key)
{
    while(root != NULL) 
    {
    if(key == root->data)
        return root;
    else if(key<root->data)
    {
        root = root->left;
    }
    else 
    {
        root = root->right;
    }
    }
    return NULL;
}

int main() {
    struct node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // printf("In-order traversal: ");
    // inOrder(root);
    // printf("\n");

    // printf("Pre-order traversal: ");
    // preOrder(root);
    // printf("\n");

    // printf("Post-order traversal: ");
    // postOrder(root);
    // printf("\n");
    struct node *n = searchIter(root, 1);
    if(n!=NULL)
        printf("found:%d", n->data);
        else
            printf("Element not found");

    return 0;
}