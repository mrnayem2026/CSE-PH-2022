#include<bits/stdc++.h>
using namespace std;

void printbubble(int array,int size)
{

    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{

    int size;
    cout<<"How much size you want : ";
    cin>>size;

    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    //Before Bubble sorting
    cout<<"Before Bubble sorting ";
    printbubble(array,size);

    //After Bubble sorting
    cout<<"After Bubble sorting ";
    printbubble(array,size);



    return 0;
}
