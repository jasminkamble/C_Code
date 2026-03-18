#include<stdio.h>
int main(){
    int i,n;

    printf("enter the size of an array : \n");
    scanf("%d",&n);
    int a[n];

    printf("enter the %d values in an array : \n",n);

    for(i=0;i<n;i++){
        printf("array[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("\nPrinting array elements : \n");
    for(i=0;i<n;i++){
        printf("arr[%d] = %d\n",i,a[i]);
    }
}