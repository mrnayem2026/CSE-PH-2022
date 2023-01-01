#include<stdio.h>

int main()
{

    int z = 100;
    int *p =&z;
    int **i = &p;

    printf(" Addres ->  %lld  value -> %d\n", &z, z);
    printf(" value->  %lld  addres -> %p\n", p, *p);
     printf(" value ->  %lld  addres -> %p\n", i, **i);




    return 0;
}
