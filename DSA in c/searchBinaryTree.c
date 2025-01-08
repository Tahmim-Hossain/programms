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
struct node* search(struct node *root,int key)
{
    if(root==NULL)
        return NULL;
    if(key==root->data)
        return NULL;
    else if(key<root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

int main() {
    struct node *root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(6);
    root->left->left = createNode(1);
    root->left->right = createNode(4);

    // printf("In-order traversal: ");
    // inOrder(root);
    // printf("\n");

    // printf("Pre-order traversal: ");
    // preOrder(root);
    // printf("\n");

    // printf("Post-order traversal: ");
    // postOrder(root);
    // printf("\n");
    struct node *n = search(root, 3);
    if(n!=NULL)
        printf("%d", n->data);
    else
        printf("element not found");
    return 0;
}
