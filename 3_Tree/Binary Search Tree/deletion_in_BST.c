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
    n->left = NULL;
    n->right = NULL;
    return n;
};

int isBST(struct node *root)
{
    static struct node *prev = NULL;

    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
        
    }else{
        return 1;
    }
    
    
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
    
    
}

struct node *searchIterative(struct node *root, int key)
{
    while (root !=NULL)
    {
        if (key == root->data )
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    
    }
    return NULL;
    
};

struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
};

struct node *deleteNode(struct node *root, int value)
{
    struct node *iPre;

    if (root == NULL)
        return NULL;

    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        // Case 1: Leaf node
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }

        // Case 2: Node with two children
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }

    return root;
}

int main()
{
    struct node *p = createNode(9);
    struct node *p1 = createNode(7);
    struct node *p2 = createNode(18);
    struct node *p3 = createNode(3);
    struct node *p4 = createNode(8);

    /*tree look like this
            9
           / \
          7   18
         / \
        3   8
   */

    //linking the root node with left and right node
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    deleteNode(p, 18);
    printf("\n");
    inOrder(p);
    printf("\n");
    
    return 0;
}
