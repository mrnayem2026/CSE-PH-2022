#include<stdio.h>

int main()
{
    int hight;
    printf("Enter your Hight in incehs : ");
    scanf("%d",&hight);

    int feat,inche;

    feat = hight/12;
    inche = hight%12;

    printf("Your hight is %d and your inche is %d ",feat ,inche  );
    return 0 ;
}
