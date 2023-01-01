#include<bits/stdc++.h>
using namespace std;


void sandGlass(void)
{
    int x,t;

    cout<<"Enter X. X is Sand : ";
    cin>>x;

    cout<<"Enter T. T is  second : ";
    cin>>t;

    if(x>t)
    {
        cout<<x-t;
    }
    else
    {
        cout<<"0";
    }
}

int main()
{

    sandGlass();
    return 0;
}
