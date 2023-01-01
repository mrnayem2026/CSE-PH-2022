#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node *next;

    Node(int val)
    {
        value = val;
        next = NULL;
    }

};

void insertAtTail(Node* &head, int val)
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}


void insertAtHead(Node* &head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void display(Node *n)
{
    while(n != NULL)
    {
        cout<<n->value;
        if(n->next != NULL)
        {
            cout<<"-> ";
        }
        n = n->next;
    }
}
int main()
{
    Node *head = NULL;

    int n;
    int choice;
    cout<<"Next Choice : ";
    cin>>choice;

    cout<<"1 --> Insert the value at Head"
    <<endl<<"2 --> Insert the value at Tail"
    <<endl<<"0 --> Exist"<<endl;

    while( choice != 0 )
    {
        cout<<"Enter the value : ";
        cin>>n;

        switch(choice)
        {
        case 1:
            insertAtHead(head,n);
            break;
        case 2:
            insertAtTail(head,n);
            break;
        default:
            break;
        }

        cout<<"Next choice : ";
        cin>>choice;
    }

    cout<<endl<<endl;
    cout<<"This is a Linked List :-> ";
    display(head);
    return 0;
}
