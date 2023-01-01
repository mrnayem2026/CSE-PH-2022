#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"How much size you want ? : ";
    cin>>size;

    char ch;

    cout<<"Do you want search: (Y/N) :- ";
    cin>>ch;

    while(toupper(ch) == 'Y')
    {
            int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    int checkvalue;
    cout<<"Please enter the value you want to search: ";
    cin>>checkvalue;

    int flag = 0;

    for(int i=0; i<size; i++)
    {
        if(array[i] == checkvalue)
        {
            flag =1;
            cout<<"Index No: "<<i<< " Position No: "<<i+1<<endl;
        }
    }

    if(flag == 0 ) cout<<"NOT FOUND";

     cout<<"Do you want continue searching: (Y/N)";
    cin>>ch;
    }

    return 0;
}
