#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[50];
    cout<<"What is your name : ";
    gets(a);

    char v[50];
    cout<<"what is your village name : ";
    cin.getline(v,40);

    cout<<endl<<"My Name is "<<a<<",and My village name "<<v<<endl;
    return 0;
}


// আমরা এখানে c++ দিয়ে ইনপুট নেওয়া শিখেছি।
// cin<< দিয়ে ইনপুট নেওয়া হয়।
// cin.getline(v,40) দিয়ে space সহ string বা charector নেওয়া হয়