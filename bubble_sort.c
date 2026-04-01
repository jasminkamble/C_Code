#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int arr[5];

    printf("Enter array element:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("\nprinting array element before sortting:\n");

    for(i=0;i<5;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("\n");

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[j]<arr[i]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    printf("printing array after swapping in asending order\n");
    for(i=0;i<5;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("\n");
      for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[j]>arr[i]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    printf("\nprinting array after swapping in desending order\n");
    for(i=0;i<5;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }

    return 0;


}