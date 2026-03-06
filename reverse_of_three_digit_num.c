#include<stdio.h>
int main()
{
    int n,n1,n2,n3,n4;
    printf("Enter number=",n);
    scanf("%d",&n);
    n1=n/100;
    n2=(n/10)%10;
    n3=(n%100)%10;
    n4=(n3*100)+(n2*10)+n1;
    printf("Reverse of three digit number=%d",n4);
    return 0;
}