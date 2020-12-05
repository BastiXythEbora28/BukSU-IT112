#include <stdio.h>
#include <stdio.h>
int main()
{
    int i=1,c;
    printf("the numbers from 1 to 100 which are not divisible\nby 3 are:\n\n");
    for(i=1;i<=100;i++)
    {
        /*Conditions to check numbers not divisible by 3.*/
        if(i%3!=0)
        {
            printf("%d  ",i);
            c++;
        }
    }
    printf("\n\n Total Count = %d",c);
    return 0;
}
