#include<stdio.h>
int main()
{
    int n1,n2,add;
    int sub,div,multi;
    char op;
    printf("emter the op :");
    scanf("%c",&op);
    printf("Enter a number:");
    scanf("%d%d",&n1,&n2);

    switch(op)
    { 
        case '+':
        printf("Addition=%d",n1+n2);
        break;
        case '-':
        printf("Subtraction=%d",n1-n2);
        break;
        case '*':
        printf("multi=%d",n1*n2);
        break;
        case '/':
        printf("division=%d",n1/n2);
        break;
        default:
        printf("enter the correct operater");
        break;

    }


}