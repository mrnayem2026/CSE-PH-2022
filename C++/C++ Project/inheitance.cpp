#include<bits/stdc++.h>
using namespace std;

class baba
{
public:
    int x;
private:
    int y;
protected:
    int z;
public:
    baba(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
};

class cele: public baba
{
public:
    int xx;
    cele(int aa,int a,int b,int c) : baba(a,b,c)
    {
        xx=aa;
    }

    void cala()
    {
        cout<<"Tel me "<<z<<endl;
    }

};



int main()

{

    baba ba(10,20,30);
    cele na(5000,10,20,30);
    cout<<na.x<<endl;
    na.cala();
    return 0;
}

