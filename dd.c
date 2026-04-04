#include<stdio.h>

int main()
{
    int i, n, m;
    int sum1 = 0, sum2 = 0, add = 0;

    printf("Enter the size of array 1: ");
    scanf("%d", &n);
    int arr1[n];

    printf("Enter the size of array 2: ");
    scanf("%d", &m);
    int arr2[m];

    printf("Enter the elements of arr1:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of arr2:\n");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Printing elements of arr1:\n");
    for(i = 0; i < n; i++)
    {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    printf("Printing elements of arr2:\n");
    for(i = 0; i < m; i++)
    {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    // Sum of arr1
    for(i = 0; i < n; i++)
    {
        sum1 += arr1[i];
    }

    // Sum of arr2
    for(i = 0; i < m; i++)
    {
        sum2 += arr2[i];
    }

    add = sum1 + sum2;

    printf("Sum of both arrays = %d\n", add);

    return 0;
}