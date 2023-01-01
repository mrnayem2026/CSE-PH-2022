#include<bits/stdc++.h>
using namespace std;

void printarray(int array[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" " ;
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"How much size you want? : ";
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    //Before Bubble sort
    cout<<"Before Bubble Sort"<<endl;
    printarray(array,size);


    //After Bubble Sort
    for(int i=0; i<size; i++)
    {
        for(int j=0;  j<size-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
       cout<<"After Bubble Sort"<<endl;
    printarray(array,size);

    return 0;
}

