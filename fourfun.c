// function with arguments and with return value
#include<stdio.h>
int add(int,int);//declaration

int main(){
       int a,b,sum;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    sum=add(a,b);
    printf("sum = %d",sum);
}

//defination
int add(int a,int b){
    return a+b;
}