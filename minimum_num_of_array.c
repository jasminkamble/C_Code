#include<stdio.h>
int minarry(int arr[],int size)
{
    int min=arr[0];
    int i=0;

    for(i=1;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int i=0,min=0;
    int number[]={2,5,8,3,6,1,7};

    min = minarry(number,7);
    printf("the minimun number in given arr is = %d",min);

    return 0;
}
