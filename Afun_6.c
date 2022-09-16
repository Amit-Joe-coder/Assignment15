/*6. Write a function in C to read n number of values in an array and display it in reverse
order*/
#include <stdio.h>
void A_rev(int[], int);
int main()
{
    int n, x[n];
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    A_rev(x, n);
}
void A_rev(int a[], int b)
{
    int i;
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = b - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}