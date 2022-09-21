/*8. Write a function in C to print all unique elements in an array.*/
#include <stdio.h>
void unique(int[], int);
int main()
{
    int n, x[n];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    unique(x, n);
}
void unique(int a[], int b)
{
    int i, j;
    printf("Enter any number to fill the memory size of %d ", b);
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < b; i++)
    {
        for (j = i + 1; j < b; j++)
        {
            if (a[i] != a[j])
            {
                printf("%d ", a[j]);
                break;
            }
        }
    }
}
