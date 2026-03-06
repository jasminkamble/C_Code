// function without arguments and with return value
#include<stdio.h>
int add();//declaration

int main(){
   int sum;
   sum=add();
   printf("sum = %d",sum);
}

//defination
int add(){
    int a,b;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);

    return a+b;
}


