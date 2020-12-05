#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Square\n", n);
    for(i=1;i<=n;i++)
    {
        printf("%d \t %ld\n",i,(i*i));
    }

    return 0;
}
