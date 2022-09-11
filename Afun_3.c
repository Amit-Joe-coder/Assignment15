// 3. Write a function to sort an array of any size. (TSRN)//
#include <stdio.h>
void A_sort(int[], int);
int main()
{
    int x[10];
    A_sort(x, 10);
}
void A_sort(int a[], int b)
{
    int i;
    printf("Enter any 10 number: ");
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < b - 1; i++)
    {
        for (int j = i + 1; j < b; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
}