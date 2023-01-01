#include<bits/stdc++.h>
using namespace std;


int main()
{
    int semester_mark[12],i,sum=0;
    float average;

    for(i = 0; i<12; i++)
    {
        cout<<"Enter your one by one semester mark: ";
        cin>>semester_mark[i];
        sum += int(semester_mark[i]);
    }
    average = float(sum) / 5.0;

    cout<<"Your average semester marks is : "<<average<<endl;


    return 0;
}
