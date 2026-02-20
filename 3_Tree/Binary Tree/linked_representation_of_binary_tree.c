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
    struct node *n;     //create a node pointer
    n = (struct node*)malloc(sizeof(struct node));   //allocating memory in the heap
    n->data = data;  //setting the data
    n->left = NULL;  //setting the left children to null
    n->right = NULL;     //setting the right children to null

    return n;  //finally returning the created node
};

// Function to print the tree data
void printTree(struct node *root) {
    if (root == NULL) {
        return;
    }

    // Print the data of the current node
    printf("%d ", root->data);

    // Recursively print the left and right subtrees
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    // constructing the root node - using function
    struct node *p = createNode(7);
    struct node *p1 = createNode(9);
    struct node *p2 = createNode(8);
    
    //linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    
    // Printing the tree data
    printf("Tree Data : ");
    printTree(p);  // Start with the root node
    printf("\n");

    return 0;
}