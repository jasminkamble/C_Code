#include<stdio.h>
int palindrome(int n)
{
    int rev,n1,n2,n3,temp;
    if(n==0)
    return 0;
    temp=n;
     n1=n%10;
     n2=n/10;
     rev=(n1*10)+n2; 
    if(temp==rev)
    {
        printf("number is palindrome.");
    }
    else
    {
        printf("number is not palindrome.");
    }

}

int main()
{
    int n;
    printf("Enter the num:");
    scanf("%d",&n);
    palindrome(n);
    
}