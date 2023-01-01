#include<bits/stdc++.h>
using namespace std;


int main()
{
    int marks;
    cout<<"Enter your Totals marks : " <<endl;
    cin>>marks;

    if (marks >= 600)
    {
        cout<<"Passed in 1st division"<<endl;
    }
    else if (marks <=599 && marks >=450)
    {

        cout<<"Passed in second division"<<endl;
    }
    else if( marks >=330 && marks <=450)
    {

        cout<<"Passed in third division"<<endl;
    }
    else
    {
        cout<<"You are fail"<<endl;
    }



    return 0;
}
