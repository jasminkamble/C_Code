#include<stdio.h>

int prime(int a)
{
    int i,prime ;
    if(a==0)
    return 0;
    else if(a==1){
        return 1;
    }
    else{
        for(i=2;i<=a/2;i++)
        {
            if(a%i==1){
                prime=1;
            }
            else{
                prime=0;
                printf("the number is not prime num\n");
            }
        }
        if(prime==1){
             printf("the number is prime num\n");

        }
    }
    
}
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    prime(a);
    return 0;
}