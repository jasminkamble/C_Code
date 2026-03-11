#include<stdio.h>
sumeven(int n);
int main()
{
    int n;
    printf("enter a num =");
    scanf("%d",&n);

    printf("sum of even num =%d\n",sumeven(n));
    return 0;
}
sumeven(int n)
{
    if (n==0)
    return 0;

    if(n%2 != 0)
    {
        return sumeven(n-1);
    }
    else
    {
        return n+sumeven(n-1);
    }

}