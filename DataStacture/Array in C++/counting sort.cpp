#include<bits/stdc++.h>
using namespace std;

void  printfArray(int array[], int n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }


int main()
{
    int size;
    cin>>size;

    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    cout<<"Before Sorting"<<endl;
    printfArray(array,size);

    //Step : 1 - Get Max value in array.
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }


    //Step : 2 create new count array and size will be [max+1]; intial all value 0;
    int count[max+1];

    for(int i=0; i<=max; i++)
    {
        count[i] =0;
    }

    //Step : 3 Frequency calculation

    for(int i=0; i<size; i++)
    {
      count[array[i]]++;
    }


    //Step : 4 Cumulative sum
    for(int i=1; i<=max; i++)
    {
        count[i] +=count[i-1];
    }

    //Step : 5 final Array

    int final[size];
    for(int i=size-1; i>=0; i--)
    {
    count[array[i]]--;
    int k=  count[array[i]];
    final[k] = array[i];
    }



    // After counting sorting
    cout<<"After counting sorting"<<endl;
     printfArray(final,size);

    return 0;
}
