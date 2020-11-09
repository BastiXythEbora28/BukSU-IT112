#include <stdio.h>
#include <stdlib.h>

int main()
{
      int num;

    printf("ENTER a Number :");
    scanf("%d", &num);
    if (num >= 0)
        printf("%d is a positive number \n", num);
    else
        printf("%d is a negative number \n", num);

}
