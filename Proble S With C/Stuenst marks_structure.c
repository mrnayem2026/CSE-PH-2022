#include<stdio.h>

struct Student {
    char name[100];
    int id;
    char subject [100];
    int marks;
    int total;

};

int main()
{
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i=0; i<n; i++)
    {
        scanf("%s %d %s %d",&students[i].name,&students[i].id,&students[i].subject,&students[i].marks);
        int sum=0;
        for(int j=0; j<i; j++)
        {
            if(students[i].id == students[j].id)
            {
                sum+= students[j].marks;
            }
        }
        int new_sum = students[i].marks+sum;
        students[i].total = new_sum;
    }
         for(int i=0; i<n; i++)
    {
        printf("%s %d %s %d %d\n",students[i].name,students[i].id,students[i].subject,students[i].marks,students[i].total);
    }
    return 0;
}
