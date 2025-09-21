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

node *buildtree()
{
    int value;
    cout << "Enter value (-1 for no node )\n ";
    cin >> value;

    if (value == -1)
    {
        return NULL;
    }

    node *root = newnode(value);

    cout << "Enter left child of " << value << ": \n";
    root->left = buildtree();

    cout << "Enter right child of " << value << ": \n";
    root->right = buildtree();

    return root;
}

void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);

    postorder(root->right);
    cout << root->data << " ";
}

int main()

{
    cout << "Build your binary tree : \n";
    node *root = buildtree();

    cout << "preorder traversal : \n ";
    preorder(root);
    cout << "\n";
    cout << "Ineorder traversal : \n ";
    inorder(root);
    cout << "\n";
    cout << "posteorder traversal : \n ";
    postorder(root);
    cout << "\n";

    return 0;
}