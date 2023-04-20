#include<stdio.h>
int main()
{
    int a,r;
    scanf("%d",&a);
    r=a%2;
    if(r==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}