#include<stdio.h>

int main()

{
   int a;
   scanf("%d",&a);
   for(int i = 0; i<a; i++)
   {
       int n;
       scanf("%d",&n);
       if(n %2 == 0)
       {
           printf("Even\n");
       }
       else{
        printf("Odd\n");
       }
   }


    return 0;
}
