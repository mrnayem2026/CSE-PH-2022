#include<stdio.h>
#include<string.h>


int main()
{
    int size;
    scanf("%d", &size);

    int ary[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d",&ary[i]);
    }
    for(int i=0; i<size; i++)
    {
            if(ary[i] % 2 != 0){
                printf("%d ", ary[i]);
            }
    }


    return 0;
}
