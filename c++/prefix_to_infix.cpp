#include <iostream>
#include <stack>
#include <string>
using namespace std;

class node {
public:
    char data;
    node *left, *right;
    node(char x) {
        data = x;
        left = right = NULL;
    }
};

class NodeStack {
public:
    int top;
    node *st[100]; 
    NodeStack() {
        top = -1;
    }

    void push(node *temp) {
        st[++top] = temp;
    }

    node* pop() {
        if (top == -1) return NULL;
        return st[top--];
    }

    bool empty() {
        return top == -1;
    }
};

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

node* create() {
    NodeStack s;
    string prefix;
    cout << "Enter prefix expression: ";
    cin >> prefix;

    int n = prefix.length();
    for (int i = n - 1; i >= 0; i--) {
        char ch = prefix[i];
        if (!isOperator(ch)) {
            node* operandNode = new node(ch);
            s.push(operandNode);
        } else {
            node* operatorNode = new node(ch);
            node* leftChild = s.pop();
            node* rightChild = s.pop();

            operatorNode->left = leftChild;
            operatorNode->right = rightChild;

            s.push(operatorNode);
        }
    }
    return s.pop();
}

void inorder(node* temp) {
    if (temp != NULL) {
        if (isOperator(temp->data)) cout << "(";
        inorder(temp->left);
        cout << temp->data;
        inorder(temp->right);
        if (isOperator(temp->data)) cout << ")";
    }
}

int main() {
    node* root = create();
    cout << "\nInfix expression is: ";
    inorder(root);
    cout << endl;
    return 0;
}
