// Find GCD (Greatest Common Divisor)

#include<stdio.h>
int gcd(int a,int b)
{
    if (b==0)
    return a;

    return gcd(b,a%b);
}
int main()
{
    printf("%d\n",gcd(4,6));
    return 0;
}

