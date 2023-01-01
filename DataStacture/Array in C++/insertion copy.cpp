#include<bits/stdc++.h>
using namespace std;


void printArray(int arra[],int size){

    for(int i=0; i<size; i++)
    {
        cout<<arra[i]<<" " ;
    }
}

int main()
{
    int arra[50];

    int size;
    cout<<"Give The size: ";
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cin>>arra[i];
    }
    cout<<"All array is here : ";
    printArray(arra,size);

    int pos, value;
    cout<<"Give the position Number : " ;
    cin>>pos;

    cout<<"Give the value : ";
    cin>>value;

    if(pos>0 || pos>size)
    {
        cout<<"Invalied Position";
    }
    else
    {
        for(int i=size-1; i>=pos; i--)
        {
            arra[i+1] = arra[i];
        }
        array
    }
    return 0;
}
