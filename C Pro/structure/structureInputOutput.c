#include<stdio.h>

struct Student
{
    char name[100];
    int roll;
    int marks;

};


int main()

{

    struct Student  a1 = { "Nayem",25,82};

    strcpy(a1.name,"Najim");
    a1.roll = 36;
    a1.marks =85;
    printf("Name is - %s Roll - %d Marks -- %d \n",a1.name,a1.roll,a1.marks);





  //  struct Student.name = "Nayem";
   // struct Student.roll = 10;
  //  struct Student.marks = 80;

  //  printf("%s %d %d \n",Student.name);

    return 0;
}
