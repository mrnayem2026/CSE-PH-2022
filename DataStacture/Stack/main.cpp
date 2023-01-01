#include<bits/stdc++.h>
#include"MYHEDER.h"

using namespace std;

int main()
{
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    //while( !st.empty() )
    //{
    //cout<< st.pop()<<endl;
    //}

   cout<< st.size()<<endl;
   cout<< st.empty()<<endl;
   cout<< st.topp()<<endl;



    return 0;
}
