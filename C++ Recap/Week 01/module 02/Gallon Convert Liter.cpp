#include<bits/stdc++.h>
using namespace std;


int main()
{
    float liter = 3.785;
    float gallon = 10.00;
    cout<<"Gallon\t"<<"Liter"<<endl;
    cout<<"------\t"<<"------"<<endl;
    for(int i=1; i<=gallon; i++)
    {
        cout<<i<<"\t"<<i*liter<<endl;
    }
    return 0;
}
