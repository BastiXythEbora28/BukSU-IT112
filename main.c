#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   double sum = 0.10;

   for(i=2;i<=15; i++)
   {
       sum = sum + sum;
       printf("total money for day %d is %.2f\n",i, sum);
   }

   return 0;
}

