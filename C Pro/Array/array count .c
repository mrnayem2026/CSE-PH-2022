#include<stdint.h>

int main()
{
    int number_of_user;
    scanf("%d", &number_of_user);

    int rating[number_of_user];

    for(int i =0; i<number_of_user; i++)
    {
        scanf("%d", &rating[i]);
    }



   int sum = 0;
   for(int i=0; i<number_of_user; i++)
   {
       sum += rating[i];
   }

   double average = (double)(sum)/number_of_user;
   printf("Average = %lf \n", average);

    int count[6] = {0};
   for(int i = 1; i<=5; i++)
   {
       int x = rating[i];
       count[x]++;
   }
   for (int i = 1; i<)
    return 0;
}

/*

Google playstore rating;

1 2 1 2 3  4 5 2 4 5

average = supuse : 2.500
1 - 2
2- 3
3 - 1
4- 2
5 - 2


*/

