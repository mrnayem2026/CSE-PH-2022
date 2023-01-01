#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node* prev;

    Node(int val)
    {
        value = val;
        next=NULL;
        prev=NULL;
    }

};


class Stack
{
    Node* head;
    Node* top;

    int count = 0;
public:
    //PUSH

    void push(int val)
    {
        Node *newNode = new Node(val);

        if(head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    //POP
    int pop()
    {
            Node *delNode ;
    delNode = top;
    int chk = -1;

    if(head == NULL)
    {
        cout<<"Stack Underflow";
        return chk;
    }

    //
    if( top = head)
    {
        // there is only 1 element;
        head = top = NULL;
    }else{
    // there is more than one element;
    top = delNode->prev;
    top->next = NULL;
    }
    chk = delNode->value;
    delete delNode;
    count--;
    return chk;

    }

    //EMPTY
    bool empty()
    {
        if(head == NULL)
        {
            return true;
        } else
        {
            return false;
        }
    }
    //TOP
    int top()
    {
        if(top == NULL)
        {
         cout<<"Stack Underflow there is no element ";
        }
        else
        {
            return top->value;
        }
    }
    //SIZE
    int size()
    {
        return count;
    }

};


int main()
{


    return 0;
}
