#include<stdio.h>
int main()
{
    int i,j,n,m;
    int sum=0;
    

    printf("Enter the size of array 1 :");
    scanf("%d",&n);
    int arr1[n];

    printf("Enter the size of array 2 :");
    scanf("%d",&m);
    int arr2[m];
    int arr3[n];

    printf("Enter the elements of arr 1:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of arr 2:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("\nprinting the elemats of arr1:\n");
    for(i=0;i<n;i++)
    {
        printf("arr1[%d]=%d\n",i,arr1[i]);
    }

    
    printf("\nprinting the elemats of arr 2:\n");
    for(i=0;i<m;i++)
    {
        printf("arr2[%d]=%d\n",i,arr2[i]);
    }

    printf("sum of arr1 and arr2\n");
    for(i=0;i<n;i++)
    {
      arr3[i] = arr1[i]+arr2[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr3[i]);
    }    

   


    return 0;
}