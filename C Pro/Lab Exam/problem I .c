#include<stdio.h>

int main()

{
    int a,b,c,first,second,therd,min;
    scanf("%d %d %d", &a,&b,&c);

    first = a + b;
    second = a + c;
    therd = b + c ;

   if (first<second && first<therd)
   {
       printf("%d",first);
   }else if(second<therd)
   {
       printf("%d",second);
   } else {

   printf("%d",therd);
   }
    return 0;
}

