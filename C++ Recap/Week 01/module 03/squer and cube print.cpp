#include<bits/stdc++.h>
using namespace std;

void square(void)
{
    cout<<"Real Number "<<"\t"<<"Square number"<<endl;
    cout<<"---**---"<<"\t"<<"---**---"<<endl;

    for(int i =1; i<=10;i++)
    {
        cout<<i<<"\t\t"<<i*i<<endl<<endl;
    }
}

void cube(void)
{
    cout<<"Real Number "<<"\t"<<"Square number"<<endl<<endl;
    cout<<"---**---"<<"\t"<<"---**---"<<endl;

    for(int i =1; i<=10;i++)
    {
        cout<<i<<"\t\t"<<i*i*i<<endl;
    }
}

int main()
{
    cout<<"Square 1 to 10 number is bellow "<<endl<<endl;
    square();

    cout<<"Cube 1 to 10 number is bellow "<<endl;
    cube();
    return 0;
}
