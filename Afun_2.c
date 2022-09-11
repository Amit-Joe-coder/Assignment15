/*2. Write a function to find the smallest number from the given array of any size. (TSRS)*/
#include <stdio.h>
int s_fun(int[], int);
int main()
{
    int x[10];
    printf("%d", s_fun(x, 10));
}
int s_fun(int a[], int b)
{
    printf("Enter any 10 number: ");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for (int i = 1; i < b; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}