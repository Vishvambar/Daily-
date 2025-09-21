#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{

    node *head = NULL ;
    node *temp = NULL;
    node *last = NULL;

    cout << "Enter elements to add in liked list : \n";

    for (int i = 0; i < 5; i++)
    {
        int value;
        cout << "Element " << i + 1 << ": ";

        cin >> value;

        temp = new node;
        temp->data = value;
        temp->next = NULL;

        if (head == NULL){
            head = temp ;
            last = temp ;
        }else {
            last->next = temp ;
            last = temp;
        }
    }

    cout << "\nLinked List : \n";
    temp = head ;
    while (temp != NULL){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout << "NULL\n";
    return 0;
}