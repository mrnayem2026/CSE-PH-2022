#include<bits/stdc++.h>

using namespace std;


class Example
{
public:
    int mul(int a, int b)
    {
        cout<<"First One"<<endl;
        return a*b;
    }
    double mul (double a, double b)
    {
        cout<<"Second One"<<endl;
        return a*b;
    }

};

int main()
{
    Example ex;
    cout<<ex.mul(20.00,10.0)<<endl;

    return 0;
}
