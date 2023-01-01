#include<bits/stdc++.h>
using namespace std;


int main()
{
    char plusOrMines;
    int num1,num2;

    cin >>num1;
    cin>>plusOrMines;
    cin>>num2;

    if(plusOrMines == '+')
    {
        cout<<num1+num2<<endl;
    } else if (plusOrMines == '-')
    {
        cout<<num1 - num2<<endl;
    } else if (plusOrMines == '*')
    {
        cout<<num1 * num2<<endl;
    } else
    {
        cout<<num1 / num2<<endl;

    }


    return 0;
}
