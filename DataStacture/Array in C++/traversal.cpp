#include<bits/stdc++.h>

using namespace std;

void PrintArray(int arrays[],int sizes)
{
    for(int i=0; i<sizes; i++)
    {
        cout<<arrays[i]<<" ";
    }
}

int main()
{

 int arrays[50];
 int sizes;
 cin>>sizes;

 for(int i=0; i<sizes; i++)
 {
     cin>>arrays[i];
 }

cout<<"Given the arrays"<<endl;
PrintArray(arrays,sizes);


return 0;
}

