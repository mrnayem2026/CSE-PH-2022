#include<bits/stdc++.h>
#include"stack renew as header.h"

using namespace std;

int main()
{
    Stack stl;

    stl.push(10);
     stl.push(150); stl.push(15);
      stl.push(150);
       stl.push(1550);
        stl.push(1550);
         stl.push(1550000);

    while( !stl.empty())
    {
        cout<< stl.pop() <<endl;
    }
    return 0;
}
