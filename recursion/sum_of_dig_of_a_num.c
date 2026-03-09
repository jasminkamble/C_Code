// Sum of Digits of a Number

#include<stdio.h>

int sum(int n)
{
    if(n==0)
    return 0;

    return (n%10)+sum(n/10);
}
int main()
{
    printf("sum=%d\n",sum(1239));
}

