/*7. Write a function in C to count a total number of duplicate elements in an array.*/
#include <stdio.h>
int dub(int[], int), m = 0;
int main()
{
    int n, x[n];
    printf("Enter the numbers of elements :");
    scanf("%d", &n);
    printf("%d", dub(x, n));
}
int dub(int a[], int b)
{
    int i;
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < b ; i++)
    {
        for (int j = i + 1; j <= b; j++)
        {
            if (a[i] == a[j])
            {
                m++;
            }
        }
    }
    return m;
}