#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[],int x, int lb, int ub){
    if(lb<=ub)
    {
       int mid = (lb+ub)/2;
        if(x == array[mid]) return mid; //center
        else if(x>array[mid]) binarySearch(array,x, mid+1, ub); // right
        else binarySearch(array,x,lb, mid-1); // left
    }
    else return -1;


}

int main()
{


    int size;
    cout<<"How much size you want to array : ";
    cin>>size;

    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }


    int checkValue;
    cout<<"Please Enter the value you want to search : ";
    cin>>checkValue;

    int indexNumber;
    indexNumber = binarySearch(array,checkValue, 0,size-1);

    if(indexNumber != -1)
    {
        cout<<"Index No: "<<indexNumber<< "Position No : "<< indexNumber+1<<endl;
    }
    else{
        cout<< "Not found";
    }
    return 0;
}
