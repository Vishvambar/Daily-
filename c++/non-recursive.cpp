#include<iostream>
using namespace std;



struct node {
    int data ;
    node *left;
    node *right ;
};

node *newnode (int value){
    node *temp = new node;
    temp->data= value;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}




int main (){
    return 0;
}