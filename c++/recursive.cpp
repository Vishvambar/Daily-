#include <iostream>
using namespace std;

struct node
{
    node *left;
    node *right;
    int data;
};

node *newnode(int value)
{
    node *temp = new node;
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder (node *root){
    if (root == NULL ) return ;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder (node *root){
    if (root == NULL ) return ;
    postorder(root->left);
    
    postorder(root->right);
    cout << root->data << " ";
}

int main()

{

    node *root = newnode(12);
    root->left = newnode(10);
    root->right = newnode(1);
    root->left->left = newnode(89);
    root->left->right = newnode(10);

    cout << "preorder traversal : \n ";
    preorder(root);
    cout << "\n";cout << "Ineorder traversal : \n ";
    inorder(root);
    cout << "\n";cout << "posteorder traversal : \n ";
    postorder(root);
    cout << "\n";




    return 0;
}