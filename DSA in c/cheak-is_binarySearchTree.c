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
int isBST(struct  node * root)
{
    static struct node *prev = NULL;
    if(root!=NULL)
    {
        if(!isBST(root->left))
            return 0;
        if(prev!=NULL && root->data <= prev->data)
            return 0;

        prev = root;
        return isBST(root->right);
    }
    else
        return 1;
}

int main() {
    struct node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("In-order traversal: ");
    inOrder(root);
    printf("\n");
    printf("%d",isBST(root));

    // printf("Pre-order traversal: ");
    // preOrder(root);
    // printf("\n");

    // printf("Post-order traversal: ");
    // postOrder(root);
    // printf("\n");

    return 0;
}
