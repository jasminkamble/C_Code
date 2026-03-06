// swapping of two numbers using third variable.
#include<stdio.h>
int main()
{
    int a,b,result;
    printf("Enter num1=",a);
    scanf("%d",&a);
    printf("Enter num2=",b);
    scanf("%d",&b);
    result=a;
    a=b;
    b=result;
    printf("a=%d & b=%d",a,b);
    return 0;
} 

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter num1=",a);
//     scanf("%d",&a);
//     printf("Enter num2=",b);
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a=%d & b=%d",a,b);
//     return 0;
// }
