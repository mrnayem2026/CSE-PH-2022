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

void insetAtHead(Node* &head,int val)
{
    //Step No : 01 -> newNode creation
    Node *newNode = new Node(val);
    //Step No : 02 -> upDate newNode;
    newNode->Next = head;
    //Step No : 03  newNode == head;
   head =  newNode;
}

void insertTail(Node* &head,int val)
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
        n=n->Next;
    }

    cout<<endl<<endl;
}

int main()
{
    Node *head = NULL;

    int n;


    //Choice 1 : Insert at Head.
    //Choice 2 : Insert at Tail.

    cout<<"Choice 1 : Insert at Head."<<endl<<"Choice 2 : Insert at Tail"<<endl<<"Choice 3 : Exit" <<endl;
    int choice = 2;
    while(choice == 1 || choice == 2)
    {
        cout<<"Enter the value: ";
        cin>>n;
        if(choice ==1){
            insetAtHead(head,n);
        }
        else if(choice==2)
        {
            insertTail(head,n);
        }
        cout<<"NEXT CHOICE : ";
        cin>>choice;
    }

    display(head);

    return 0;
}

