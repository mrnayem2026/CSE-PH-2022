#include<bits/stdc++.h>
using namespace std;


int binarySearch(int array[],int a, int low, int high)
{
    if(low<=high){

            int mid = (low+high)/2;
        if(a == array[mid])
        {
            return mid;
        }
        else if(a>array[mid])
        {
            binarySearch(array,a,mid+1,high);
        }
        else{
            binarySearch(array,a,low,mid-1);
        }
    }
    else{
        return -1;
    }
}


int main()
{
    int size;
    cout<<"How much size you want to array? : ";
    cin>>size;

   int array[size];

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    int checkValue;
    cout<<"Please Enter your Check Value: ";
    cin>>checkValue;

    int indexNumber;
    indexNumber = binarySearch(array,checkValue,0,size-1);

    if(indexNumber != -1)
    {
        cout<<"Index Number is : "<< indexNumber <<"Position Number is : " << indexNumber+1<<endl;
    }
    else{
        cout<<"Not Found";
    }

    return 0;
}
