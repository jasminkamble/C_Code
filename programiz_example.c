
// Q11.C program to check whether a charater is vowel or consonant.

/*#include<stdio.h>
int main()
{
    char ch;
    char case1, case2;
    printf("Enter a chracter:");
    scanf("%c",&ch);

    case1 = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    case2 = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');

    if(case1||case2){
        printf("The character %c is vowel.");
    }
    else
    printf("The chracter %c is consonant.");
    return 0;
}*/


// Q12 C program to find largest number among three number.

/*#include<stdio.h>
int main()
{
    int num1,num2,num3;
    int case1,case2,case3;
    printf("Enter a number=");
    scanf("%d%d%d",&num1,&num2,&num3);

    case1 = (num1>=num2 && num1>=num3);
    case2 = (num2>=num1 && num2>=num3);
    case3 = (num3>=num1 && num3>=num2);

    if(case1)
    {
        printf("The largest number num1=%d",num1);
    }
    else if(case2)
    {
        printf("The largest number is num2=%d",num2);
    }
    else if(case3)
    {
        printf("The largest number is num3=%d",num3);
    } 
    else 
    printf("he numbers are equal");

    return 0;
}*/

// Q16 C program to check whether the charecter is an Alphabet or not.

/*#include <stdio.h>
int main()
{
    char ch;
    char case1 ,case2;
    printf("Enter a charater=");
    scanf("%c",&ch);

    case1 = (ch>='a' && ch<='z');
    case2 = (ch>='A' && ch<='z');

    if(case1)
    {
        printf("the character %c is an alphabet");
    }
    else 
    printf("the charater %c is not an alphabet");

    return 0;
}*/

// Q14 C program to check leap year.

/*#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year:");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("you have enter leap year");
    }
    else 
    printf("The enter year is not leap year");

    return 0;
}*/

// C program to find the ASCII value of a character.

/*#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);

    printf("the ASCII value of a character %c is %d ",ch,ch);

    return 0;

}*/


// Q4 Cprogram to multiply two floating-point number.

/*#include<stdio.h>
int main()
{
    float num1, num2, multi;
    printf("enter a number=");
    scanf("%f%f",&num1,&num2);
    multi=num1*num2;
    printf("multiplication=%f",multi);

    return 0;
}*/


// Q7 C progrm to find the size of int ,float ,double & char.

#include<stdio.h>
int main()
{
    

}