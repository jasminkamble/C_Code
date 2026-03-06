
// #include<stdio.h>
// void change(int *num)
// {
//     printf("\nbefore adding value in function num=%d",*num);
//     *num+=100;
//     printf("\nafter adding thevalue inside the function num=%d",*num);
// }
// int main()
// {
//     int x=400;
//     printf("\nbefore calling the function x=%d",x);
//     change(&x);
//     printf("\nafter calling the function value x=%d\n",x);
// }


// Swap of two number

#include<stdio.h>
void swap(int *a,int *b)
{
    int result;
    result=*a;
    *a=*b;
    *b=*a;
}
int main()
{
    int a,b,result;
    printf("Enter the numbers a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("after calling the swap function a=%d,b=%d\n",a,b);

}