#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[],int x,int low,int highe)
{
    if(low<=highe)
    {
        int mid = (low+highe)/2;
        if(x == array[mid]) return mid;
        else if( x>array[mid]) binarySearch(array,x,mid+1,highe);
        else  binarySearch(array,x,low,mid-1);
    }
    else{
        return -1;
    }
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

    int checkValue;
    cout<<"Please Enter your Check Value : ";
    cin>>checkValue;


    int indexNumber;
    indexNumber = binarySearch(array,checkValue,0,size-1);

    if(indexNumber != -1)
    {
        cout<<"Index Number is : "<< indexNumber <<" Position Number is : "<<indexNumber+1<<endl;
    }
    else{
        cout<<"Not found";
    }


    return 0;
}
