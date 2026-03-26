// sum of aaray elements

#include<stdio.h>
int main()
{
    int n,sum,i;
    int arr[5]={10,20,30,40,50};
    n=5;
    sum=0;
    for(i=0;i<n;i++){
    sum+=arr[i];
    }
    printf("the sum of arr element=%d",sum);
    return 0;
}