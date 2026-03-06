#include<stdio.h>
int main()
{
    char lowercase_vowel,uppercase_vowel;
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);


    lowercase_vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    
    uppercase_vowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(lowercase_vowel||uppercase_vowel){
    
        printf("The character is vowel=%c",ch);
    }
    else
    printf("The character is consonant=%c",ch);
    return 0;
}



// #include<stdio.h>
// int main()
// {
//     char ch,case1,case2;
//     printf("Enter an alphabet:");
//     scanf("%c",&ch);

//     case1=(ch>='a'&& ch<='z');
//     case2=(ch>='A' && ch<='Z');

//     if(case1||case2){
//         printf("the character %c is an alphabet",ch);
//     }
//     else
//     printf("the character %c is not an alphabet",ch);
// }


// // Q14.Check program to check leap year
// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("Enter Year:");
//     scanf("%d",&year);

//     if(year%4==0){
//         printf("this  is leap year.");
//     }
//     else
//     printf("this  is not leap year.");
// }

// // Q12.C Program to Find the Largest Number Among Three Numbers
// #include<stdio.h>
// int main()
// {
//     int num1,num2,num3;
//     int case1,case2,case3;
//     printf("Enter the number:");
//     scanf("%d%d%d",&num1,&num2,&num3);

//     case1=(num1>=num2 && num1>=num3);
//     case2=(num2>=num1 && num2>=num3);
//     case3=(num3>=num1 && num3>=num2);
//      if(case1){
//         printf("The number %d is largest.",num1);
//      }
//      else if(case2){
//      printf("The number %d is largest.",num2);
//      }
//      else if(case3){
//         printf("the number is %d",num3);
//      }
//      else 
//      printf("numbers are equal.");
     

// }

// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter character:");
//     scanf("%c",&ch);

//     printf("The ASCII value of %c is %d",ch ,ch);
//     return 0;
// }



// Q7.c program to find size of int ,float ,double& char
// #include<stdio.h>
// int main()
// {
//     int int_size;
//     printf
    

// }


//Program to Compute Quotient and Remainder.
// #include<stdio.h>
// int main()
// {
//     int a,b,div,quotient,remainder;
//     printf("Enter numbers:");
//     scanf("%d%d",&a,&b);
//     quotient=a/b;
//     remainder=a%b; 

//     printf("\nthis is quotient=%d",quotient);
//     printf("\nthis is remainder=%d",remainder);

// }




//Q17(1)C Program to Calculate the Sum of Natural Numbers

// #include<stdio.h>
// int main ()
// {
//     int N,sum=0;
//     int i=1;
//     printf("enter positive number:");
//     scanf("%d",&N);
//     do{
//         sum += i;
//         i++;
//     }
//     while(i<=N);
//     printf("sum  =%d",sum);
//     return 0;
// }





//Q17(2)C Program to Calculate the Sum of Natural Numbers

// #include<stdio.h>
// int main()
// {
//     int N,i,sum=0;
//     printf("Enter positive integer:");
//     scanf("%d",&N);

//     for(i=1;i<=n;i++)
//     sum+=i;
//     {
//         printf("sum of integer:%d",sum);
//     }
// }



//Q17(3)Sum of Natural Numbers Using while Loop

// #include<stdio.h>
// int main()
// {
//     int N,sum=0;
//     int i=0;
//     printf("Enter positive integer:");
//     scanf("%d",&N);

//     while(i<=N){
//           i++;
//         sum+=i;
//     }
//     printf("sum=%d",sum);
// }






//C Program to Generate Multiplication Table

#include<stdio.h>
int main()
{
    int j,k;
    j=1;
    printf("Enter number:");
    scanf("%d",&k);

    do{
        printf("\n%d*%d=%d",k,j,k*j);
        j++;

    }
    while(j<=10);
    return 0;
    
}
