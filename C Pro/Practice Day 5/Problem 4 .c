#include<stdio.h>

int main()
{
    int marks;
    printf("Enter Your Marks : ");
    scanf("%d",&marks);



    if(marks >= 80 && marks <= 100)
    {
        printf("You got A+ \n");
    }else if (marks >= 70 && marks <=79 )
    {
        printf("You got A \n");
    } else if (marks >= 60 && marks<= 69)
    {
        printf("You got B \n");
    }else if (marks >= 50 && marks <= 59 )
    {
        printf("You got C \n");
    }else if (marks >= 40 && marks <= 49 )
    {
        printf("You got D \n");
    } else if(marks >= 0 && marks <= 40 )
    {
        printf("Your are failler");
    }

    return 0;
}
