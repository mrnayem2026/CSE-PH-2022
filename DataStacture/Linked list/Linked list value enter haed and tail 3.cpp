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
void insetAtHead(Node* &head, int val)
{
    Node *newNode = new Node(val);
    newNode->Next = head;
    head=newNode;
}

void insertAtTail(Node* &head,int val)
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
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void display(Node* n){

    while(n != NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
        {
            cout<<" --->> ";
        }
        n=n->Next;
    }


}


int countLengthOfLinkedList(Node* &head)
{
    int count = 0;
    Node* temp = head;
    while (temp!= NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

int main()
{
    Node *head = NULL;

    //Step : 01 --- Insert at head;
    //Step : 02 --- Insert at tail;
    //Step : 03 ---- Exit;

    int n;
    cout<<"Next Choice : ";
    int choice;
    cin>>choice;

    cout<<"Step : 01 --- Insert at head"<<endl<<"Step : 02 --- Insert at tail"<<endl<<"Step : 03 ---- Exit"<<endl<<endl;

    while( choice != 0 )
    {

        cout<<"Enter The value: ";
        cin>>n;

        switch(choice)
        {
        case 1:
            insetAtHead(head,n);
            break;
        case 2:
            insertAtTail(head,n);
            break;
        default:
            break;
        }
        cout<<"Next Choice :";
        cin>>choice;
    }

    cout<<endl<<"Linked List : "<<endl;
    display(head);
    cout<<endl<<"Length of liked list : "<<  countLengthOfLinkedList(head) <<endl;

    return 0;
}
