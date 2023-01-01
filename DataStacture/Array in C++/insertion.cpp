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

cout<<"Given the arrays :";
PrintArray(arrays,sizes);

int pos,value;
cout<<"Give the position :";
cin>>pos;
cout<<"Give the value :";
cin>>value;

if(pos<0 || pos>sizes)
{
    cout<< "Invalid Index";
}
else{
    //for(int i= sizes-1; i>=pos; i--)
    //{
     //   arrays[i+1] = arrays[i];
    //}

    arrays[sizes] = arrays[pos]
    arrays[pos] = value;
}
cout<<"Arrays after the insertion"<<endl;
PrintArray(arrays,sizes+1);


return 0;
}


