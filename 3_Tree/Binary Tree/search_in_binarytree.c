#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int isNodeExist(struct node *root, int key)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == key)
    {
        return 1;
    }
    
    int rec1 = isNodeExist(root->left, key);

    if (rec1)
    {
        return 1;
    }

    int rec2 = isNodeExist(root->right, key);

    return rec2;
    
}

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
};

int main()
{
    struct node *p = createNode(9);
    struct node *p1 = createNode(7);
    struct node *p2 = createNode(10);
    struct node *p3 = createNode(4);
    struct node *p4 = createNode(8);
    struct node *p5 = createNode(18);

    /*tree look like this
            9
           / \
          7   10
         / \    \
        4   8    18
   */    

    //linking the root node with left and right node
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    if (isNodeExist(p, 8))
    {
        printf("Element Found!\n");
    }
    else{
        printf("Element not found!!\n");
    }

    return 0;
}