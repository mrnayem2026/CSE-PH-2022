#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int value;
    Node *Next;

    Node(int val)
    {
        value = val;
        Next=NULL;
    }
};

void insetAtHead(Node* &head, int val)
{
    //step no: 01
    Node *newNode = new Node(val);
    //step no: 02
    newNode->Next = head;
    //step no: 03
    head=newNode;

}

void insertAtTail(Node* &head,int val)
{
    //create new node
    Node *newNode = new Node(val);

    //Step No :1;

    if(head == NULL)
    {
        head=newNode;
        return;
    }

    //Step No : 2;

    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp=temp->Next;
    }
    temp->Next=newNode;
}


void display(Node *n)
{

    while(n != NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
        {
            cout<<"->";
        }
        n=n->Next;
    }
}
int main()
{
    Node *haed = NULL;

    int n;
    int choice = 2;
    //Choice No : 01 -> are you Insert Head a value?
    //Choice No : 02 -> are you Insert Tail a value?
    //Choice No : 03 -> are you want to Exit?
    cout<<"Choice No : 01 -> are you Insert Head a value? " <<endl << "Choice No : 02 -> are you Insert Tail a value?"<<endl<<"Choice No : 03 -> are you want to Exit?"<<endl;


    while(choice == 1 || choice == 2)
    {
        cout<<"Enter the value: ";
        cin>>n;
        if(choice == 1)
        {
            insetAtHead(haed,n);
        } else if( choice == 2)
        {
            insertAtTail(haed,n);
        }
        cout<<"Next Choice : ";
        cin>>choice;
    }

    display(haed);


    return 0;
}
