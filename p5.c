#include<stdint-gcc.h>
int main()
{
    int taka;
   scanf("%d",&taka);
   if(taka>=10000)
   {
    printf("Gucci bag\n");
    if(taka>20000)
    {
        printf("Gucci belt");
    }
   }
   else if(taka>=5000)
   {
    printf("Levis bag");
   }
   else 
   {
    printf("Something");
   }

}