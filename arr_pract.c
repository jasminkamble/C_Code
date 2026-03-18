#include<stdio.h>
int main()
{
    int i;
    int a[5];

    printf("Enetr arry element:");
      
    for(i=0 ; i<6 ;i++)
    {
        scanf("%d",&a[i]);
        printf("a[%d]=%d\n",i,a[i]);
    }
}
