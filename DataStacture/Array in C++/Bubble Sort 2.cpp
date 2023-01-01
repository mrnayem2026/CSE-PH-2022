#include<bits/stdc++.h>
using namespace std;


void   printbubble(int array[],int size)
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
    cout<<"How much size you want ? : ";
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    //Before Bubble Sort
      cout<<"Before Bubble Sort : ";
    printbubble(array,size);

    //After Bubble Sort

    cout<<"After Bubble Sort : ";
    for(int i=0; i<size; i++)
    {
        cout<<"Iteration No is : "<<i<<endl;
        int flag=0;
        for(int j=0; j<size-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1]  = temp;
                flag = 1;
            }
                printbubble(array,size);
        }
        if(flag == 0 ) break;
        cout<<endl;
    }

    cout<<"After Bubble Sort : ";
    printbubble(array,size);
    cout<<endl;

    return 0;
}
