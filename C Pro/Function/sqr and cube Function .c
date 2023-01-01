#include<stdio.h>

void square_number(void)
{
    int i,num;
    printf("Number of square \n");
    for( i=1; i<=10; i++)
    {
        printf("%d  %d\n",i,    i*i);
    }
}

void cube_number()
{
    int i,num;
    printf("Number Cube \n");
    for(num=1; num<=10; num++)
    {
        printf("%d  %d\n",num,   num*num*num);
    }

}



int main()
{
    printf("Press any key to see square number from 1 to 10.\n");
    square_number();


    printf("Press any key to see cube number from 1 to 10.\n");
    cube_number();

    return 0;
}

