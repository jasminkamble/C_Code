// addition

// #include<stdio.h>
// void change(int num)
// {
//     printf("Before adding value inside function num=%d\n",num);
//     num+=100;
//     printf("after adding value inside the function num=%d\n",num);
// }
// int main()
// {
//     int x=100;
//     printf("befor caling function x=%d\n",x);
//     change(x);
//     printf("after calling the value  x=%d\n",x);
// }

// swapping


#include<stdio.h>
void swap(int a,int b)
{
    int result;
    result=a;
    a=b;
    b=a;
}
int main()
{
    int a,b,result;
    printf("Enter the numbers a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    swap(a,b);
    printf("after calling the swap function a=%d,b=%d",a,b);

}