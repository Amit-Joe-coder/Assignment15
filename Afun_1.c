/*1. Write a function to find the greatest number from the given array of any size. (TSRS)*/
#include <stdio.h>
int maxfun(int[], int);
int main()
{
    int i, x[4];
    printf("%d ", maxfun(x, 4));
}
int maxfun(int z[], int y)
{
    int max, i;
    printf("enter the 4 number: ");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &z[i]);
    }
    max = z[0];
    for (i = 1; i < 4; i++)
    {
        if (max < z[i])
        {
            max = z[i];
        }
    }
    return max;
}
