#include<bits/stdc++.h>

using namespace std;

void print(int **x)
{
   **x=500;
}

int main()
{

    int a=10;
    int *ptr = &a;
    int **q = &ptr;
    print(q);
    cout<<a<<endl;
    return 0;
}

