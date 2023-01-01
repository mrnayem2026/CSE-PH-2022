#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout<<"What is your old: "<<endl;
    cin>>age;

    if(age >= 18)
    {
        cout<<"You can vote"<<endl;
    }
    else
    {
        cout<<"You can't vote"<<endl;
    }

    return 0;
}
