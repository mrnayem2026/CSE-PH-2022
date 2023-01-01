#include<bits/stdc++.h>
using namespace std;

void sum_all_number(void)
{
    int i,sum=0;

    for(i=1; i<=100; i++)
    {
        sum+=i;
    }
    cout<<sum;
}

int main()
{

    cout<<"Sum all number 1 to 100 is : ";
    sum_all_number();
    return 0;
}
