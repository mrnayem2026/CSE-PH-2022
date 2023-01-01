#include<bits/stdc++.h>
using namespace std;

class employ
{
public:
    char name[100];
    int id;
};

int main()
{
    employ firstFlor;
    strcpy(firstFlor.name,"Baizid Hosian");
    firstFlor.id=589;

    cout<<"ID Number : "<< firstFlor.id << " Name: "<< firstFlor.name << endl;

    return 0;
}
