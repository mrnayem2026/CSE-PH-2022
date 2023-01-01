#include<stdio.h>

int main()
{
    int H,W,h,w,row,colmn,mul;

    scanf("%d %d",&H,&W);
    scanf("%d %d",&h,&w);

    row = H-h;
    colmn = W-w;

    mul = row*colmn;

    printf("%d\n",mul);
    return 0;
}
