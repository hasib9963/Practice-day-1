#include<stdio.h>
int main()
{
    int a,b,sum,mns,mlt;
    float dvd;
    scanf("%d %d",&a,&b);
    sum = a+b;
    mns=a-b;
    mlt=a*b;
    dvd=a*1.0/b;
    printf("%d+%d=%d\n%d-%d=%d\n%d*%d=%d\n",a,b,sum,a,b,mns,a,b,mlt,a,b);
    printf("%d/%d=%.2f",a,b,dvd);
    return 0;

}