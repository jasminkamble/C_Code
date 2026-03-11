// function with arguments and without return value
#include<stdio.h>
int add(int,int);//declaration

int main(){
       int a,b;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    add(a,b);
}

//defination
int add(int a,int b){
    printf("%d + %d = %d",a,b,a+b);
}