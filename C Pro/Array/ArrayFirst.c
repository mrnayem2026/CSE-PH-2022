#include<stdio.h>

int main(){

    int mark[3];


    for(int i = 0; i<3; i++)
    {
        printf("Enter Student %d Mark: ", i+1);
        scanf("%d", &mark[i]);
    }

    for(int i = 0; i<3; i++)
    {
        printf("Student %d got %d marks\n", i+1, mark[i]);
    }


    return 0;
}
