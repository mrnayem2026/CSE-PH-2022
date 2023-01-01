#include<stdio.h>

int main(){

    const int n = 50;
    int valu[n];

    printf("%d",sizeof(valu)/sizeof(valu[0]));
    /*int valus[n];

    for(int i = 0; i<n; i++)
    {
        valus[i] = i+1;
    }

    for(int i=0; i<n; i++)
    {
        printf("valus[%d] = %d\n",i,valus[i]);
    }
*/

    return 0;
}

