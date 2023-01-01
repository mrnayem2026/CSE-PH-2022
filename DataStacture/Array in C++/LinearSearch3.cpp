#include<bits/stdc++.h>
using namespace std;

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


    char c;
    cout<<"Do you want to searching (Y/N) : ";
    cin>>c;

    while(toupper(c) == 'Y')
    {

    int checkvalue;
    cout<<"Please give the value you want to search : ";
    cin>>checkvalue;
    int flag = 0;

    for(int i=0; i<size; i++)
    {
        if(array[i] == checkvalue)
        {
            flag = 1;
            cout<<"Index No is : "<<i<<" Position No is : "<<i+1<<endl;
        }
    }

    if(flag == 0 ) cout <<"NOT FOUND"<<endl;
    cout<<"Do you want to continue searching (Y/N) : ";
    cin>>c;
    }

    return 0;
}
