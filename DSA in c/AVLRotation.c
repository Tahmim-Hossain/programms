#include<stdio.h>
#include<stdlib.h>
int max(int a, int b)
{
    return a > b? a : b;
}
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int hight;
};
int getHight(struct Node *n)
{
    if(n ==NULL) return 0;
    return n->hight;
}
struct Node * createNode(int key)
{
    struct Node *node=(struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->hight = 1;

    return node;
}
int getBalanceFactor(struct Node *n)
{
    if(n==NULL) return 0;
    return getHight(n->left) - getHight(n->right);
}
struct Node * rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *t2 = x->right;
    x->right = y;
    y->left = t2;

    y->hight = max(getHight(y->right), getHight(y->left)) + 1;
    x->hight = max(getHight(x->right), getHight(x->left)) + 1;
    return x;
}
struct Node * leftRotate(struct Node *x)
{
    struct Node *y = x->left;
    struct Node *t2 = y->right;
    y->right = x;
    x->left = t2;

    y->hight = max(getHight(y->right), getHight(y->left)) + 1;
    x->hight = max(getHight(x->right), getHight(x->left)) + 1;
    return y;
}
struct Node *insert(struct Node *node,int key)
{
    if(node=NULL)
        return (createNode(key));
    if(key<node->key)
        node->left = insert(node->left, key);
    else if(key>node->key)
        node->right = insert(node->right, key);

    return node;

    node->hight=1+max(getHight(node->left),getHight(node->right));
    int bf = getBalanceFactor(node);

    //left left case
    if(bf>1 && key<node->left->key)
        rightRotate(node);
    //right right case
    if(bf<-1 && key<node->right->key)
        leftRotate(node);
    //left right case
    if(bf>1 && key<node->left->key)
    {       node->left =leftRotate(node->left);
            rightRotate(node);
    }
    //right left case
    if(bf<-1 && node->right->key)
    {
        node->right = rightRotate(node->right);
        leftRotate(node);
    }
    return node;
}
void preOrder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main(){
    struct Node *root = NULL;
    root = insert(root, 42);
    root = insert(root, 32);
    root = insert(root, 5);
    root = insert(root, 8);
    root = insert(root, 45);
    preOrder(root);
    return 0;
}