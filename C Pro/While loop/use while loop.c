#include<stdio.h>

int main()
{
  int x;
  scanf("%d", &x);

  int sum = 0;
  int reversed = 0;
  while(x>0)
  {
      int digit = x%10;
        reversed = reversed*10 + digit;
      x/=10;
      //sum += digit


  }
   printf("%d",reversed);

    return 0;
}

