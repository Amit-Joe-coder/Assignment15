/*4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include <stdio.h>
int main()
{
    int temp1, x[5], i, d;
    printf("Enter any number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Enter number of rotation: ");
    scanf("%d", &d);

    while (d)
    {
        temp1 = x[0];
        for (i = 0; i < 4; i++)
        {
            x[i] = x[i + 1];
        }
        x[4] = temp1;
        d--;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
}