#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[]={'h','e','l','l','o','w','o','r','l','d','\0'};
    char ch2[]={"helloworld"};

    printf("array value:%s \n",ch1);
    printf("string value:%s",ch2);

    return 0;
}