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
    int count=0;
    for(int i=0; i<size; i++)
    {
        if( array[i] >= 10 ) {
            count++;
        }

    }
    cout<<count;
    return 0;
}
