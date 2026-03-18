#include<stdio.h>
int main()
{
    int  i;
    char a[6];
    a[0]='j';
    a[1]='a';
    a[2]='s';
    a[3]='m';
    a[4]='i';
    a[5]='n';

    for(i=0 ; i<6 ;i++)
    {
        printf("%c",a[i]);
    }
}