#include <iostream>
#include <stack>
#include <string>
using namespace std;

class node
{
public:
    char data;
    node *left;
    node *right;
    node(char x)
    {
        data = x;
        left = right = NULL;
    }
};
class NodeStack
{
public:
    int top;
    node *st[10];
    NodeStack()
    {
        top = -1;
    }

    void push(node *temp)
    {
        st[++top] = temp;
    }
    node *pop()
    {
        return st[top--];
    }
};

node *create()
{
    NodeStack s;
    node *root, *temp;
    int i;
    char ch[10];
    cout << "\n Enter postfix expression : ";
    cin >> ch;
    while (ch[i] != '\0')
    {
        if (isalnum(ch[i]))
        {
            root = new node(ch[i]);
            s.push(root);
        }
        else
        {
            temp = new node(ch[i]);
            temp->right = s.pop();
            temp->left = s.pop();
            s.push(temp);
        }
        i++;
    }

    return s.pop();
}
void inorder (node *temp){
    if (temp != NULL){
        inorder(temp->left);
        cout<< " " << temp->data ;
        inorder(temp->right);
    }
  
}
int main()
{
    node *root = create();
    cout << "\n Inorder expression is : ";
    inorder(root);
    cout << endl;
    return 0;
}





