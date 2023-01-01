#include<bits/stdc++.h>
using namespace std;



int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int first = a+b;
    int second = b+c;
    int theird = c + a;

    if( a == second)
    {
        cout<<"yes";
    }
    else if( b == theird)
    {
      cout<<"yes";
    }
    else if (c == first)
    {
        cout<<"yes";
    } else{

    cout<<"No";
    }

    return 0;
}
