#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int array[size];

    for(int i=0; i<size; i++)
    {

        cin>>array[i];
    }

    int sum =0;
    for(int i=0; i<size; i++)
    {
        int a = sum +=array[i];
    }
    cout<<sum;
    return 0;
}
