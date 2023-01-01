#include<stdio.h>

int main()
{
    FILE *firstFile;
    firstFile = fopen("input.txt","r");
    if(firstFile == NULL)
    {
        printf("No file found\n");
        return 0;
    }
    FILE *secondFile;
    secondFile = fopen("output100.txt","w");

    while(1)
    {
        char ch = fgetc(firstFile);
        if(ch == EOF )
        {
            break;
        }
        fputc(ch,secondFile);
    }


    return 0;
}
