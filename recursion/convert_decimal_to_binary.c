#include <stdio.h>

int binary(int n)
{
    if (n == 0)
        return 0;

    binary(n / 2);
    printf("\n%d\n", n % 2);
}
int main() 
{
    binary(32);
    return 0;
}