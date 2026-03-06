// call by value

#include<stdio.h>
void change(int num)
{
    printf("Before adding value inside function num=%d\n",num);
    num+=100;
    printf("after adding value inside the function num=%d\n",num);
}
int main()
{
    int x=100;
    printf("befor caling function x=%d\n",x);
    change(x);
    printf("after calling the value  x=%d\n",x);
}