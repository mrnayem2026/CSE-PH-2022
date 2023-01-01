#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    Node(int val)
    {
        value=val;
        Next=NULL;
    }
};

void insertTail(Node* &head, int val)
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head=newNode;
        return;
    }
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
        n= n->Next;
    }
    cout<<endl<<endl;
}


int main()
{
    Node *head = NULL;

    int n;
    char choice = 'y';
    while(choice == 'y')
    {
        cout<<"Enter your value : ";
        cin>>n;
        insertTail(head,n);
        cout<<"Do you want to continue : (y/n)";
        cin>>choice;
    }



    display(head);
    return 0;
}
