#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node(int val)
    {
        value = val;
        next = NULL;
    }
};


void insetAtTail(Node* &head, int val)
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
            cout<<"->";
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

    cout<<"1 - Insert At head"
    << endl <<  "2 -- Insert At Tail"
    << endl << "0 -- Exist" << endl;

    while(choice != 0)

    {
        cout<<"Enter the value : ";
        cin>>n;

        switch(choice)
        {
        case  1 :
            insertAtHead(head,n);
            break;
        case 2:
            insetAtTail(head,n);
            break;
        default:
            break;
        }
        cout<<"Next Choice : ";
        cin>>choice;
    }

    cout<<endl<<endl;
    cout<<"Linked list here"<<endl;
    display(head);
    return 0;
}
