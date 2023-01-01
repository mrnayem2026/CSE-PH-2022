#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10,b=30,c=4,d=50,e=60,f=70,g=1;
    int mn;
    mn = max(a,max(max(max(b,c),max(d,e)),max(f,g)));

    cout<<mn<<endl;
    return 0;
}
