// function without arguments and without return value

#include<stdio.h>
int add();//declaration

int main(){
    add();
}

//defination
int add(){
    int a,b;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);

    printf("%d + %d = %d",a,b,a+b);
}
