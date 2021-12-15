//Insert and preorder traversal operation in Binary Search Tree 

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int key;
    struct node *left, *right;
};
struct node *newnode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct node *insert(struct node *node, int key)
{
    if (node == NULL) 
    {
        return newnode(key);
    }
    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else
    {
        node->right = insert(node->right, key);
    }
    return node;
}
void preorder(struct node *root) 
{
    if (root != NULL) 
    {
    printf("%d  ", root->key);
    preorder(root->left);
    preorder(root->right);
    }
}
int main() 
{
    struct node *root = NULL;
    struct node *ptr;
    int a;

    root = insert(root, 28);
    root = insert(root, 60);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 30);
    root = insert(root, 98);
    root = insert(root, 67);
    root = insert(root, 13);
    root = insert(root, 54);
    root = insert(root, 70);
    root = insert(root, 16);
    
    printf("\nPreorder traversal: ");
    preorder(root);
    printf("\n");

    return 0;
}