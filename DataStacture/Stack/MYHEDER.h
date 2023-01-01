#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node* prv;

    Node(int val)
    {
        value = val;
        next = NULL;
        prv = NULL;
    }
};

class Stack
{
    Node* head;
    Node* top;
    int count = 0;


public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }

    // PUSH
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
        newNode->prv = top;
        top = newNode;
        count++;
    }
    //POP
    int pop()
    {
        Node *delletNode;
        delletNode = top;
        int chk = -1;

        if(head == NULL)
        {
            cout<<"Stack UnderFlow there is  no element";
            return chk;
         }

        if(top == head)
        {
            head = top = NULL;
        }
        else {

            top = delletNode->prv;
            top->next = NULL;
        }

        chk = delletNode->value;
        delete delletNode;
        count--;
        return chk;
    }

    //EMPTY
    bool empty(){
    if (head == NULL) return true;
    else return false;
    }


    //SIZE
    int size()
    {
        return count;
    }

    //TOP
    int topp()
    {
        if(top == NULL)
        {
            cout<< "Stack is underflow there is no top"<<endl;
        } else{
            return top->value;
        }
    }

};

