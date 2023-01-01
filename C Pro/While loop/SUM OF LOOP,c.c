#include<stdio.h>

int main()
{
    int sum  = 0;
  for(int i = 0;i<=100; i++)
  {
      printf("add %d: new sum = %d\n",i,sum);
     sum += i;
  }
  printf("%d",sum);
    return 0;
}


