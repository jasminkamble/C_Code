#include<stdio.h>

int product(int n)
{
    if(n==0)
    return 1;
 
    return (n%10)*product(n/10);
    
}
int main()
{
    printf("product=%d\n",product(122));
}