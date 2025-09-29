#include <iostream>
#include <stack>
#include <string>
#include <algorithm> 
using namespace std;

class node {
public:
    char data;
    node *left;
    node *right;
    node(char x) {
        data = x;
        left = right = NULL;
    }
};

class NodeStack {
public:
    stack<node*> s;

    void push(node* temp) {
        s.push(temp);
    }

    node* pop() {
        if (s.empty()) {
            return NULL;
        }
        node* temp = s.top();
        s.pop();
        return temp;
    }
};

node* createFromPrefix() {
    NodeStack s;
    string prefixExpr;
    cout << "\n Enter prefix expression: ";
    cin >> prefixExpr;

    reverse(prefixExpr.begin(), prefixExpr.end());

    for (char ch : prefixExpr) {
        if (isalnum(ch)) {
            s.push(new node(ch));
        } else {
            node* temp = new node(ch);
            temp->left = s.pop(); 
            temp->right = s.pop();
            s.push(temp);
        }
    }
    return s.pop(); 
}

void inorder(node* temp) {
    if (temp != NULL) {
        bool isOperator = !isalnum(temp->data);
        if (isOperator) {
            cout << "(";
        }
        inorder(temp->left);
        cout << temp->data;
        inorder(temp->right);
        if (isOperator) {
            cout << ")";
        }
    }
}

int main() {
    node* root = createFromPrefix();
    cout << "\n Infix expression is: ";
    inorder(root);
    cout << endl;
    return 0;
}
