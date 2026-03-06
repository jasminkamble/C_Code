#include<stdio.h>
int main()
{
    int n,n1,n2;
    printf("Enter num1=",n);
    scanf("%d",&n);
    n1=n/10;
    n2=n%10;
    n=(n2*10)+n1;
    printf("Reverse of number=%d",n);
    return 0;
    
}
