#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers=",a,b);
    scanf("%d%d",&a,&b);

    printf("\nBitwise of AND is:%d",a&b);
    printf("\nBitwise of OR is:%d",a|b);
    printf("\nBitwise of XOR is:%d",a^b);
    printf("\nBitwise of NOT is:%d",~a);
    printf("\nBitwise of left shift is:%d",a<<2);
    printf("\nBitwise of right shift:%d",a>>2);
    return 0;
}
                           