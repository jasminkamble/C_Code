// function with arguments and with return value
/*#include<stdio.h>
int add(int,int);//declaration
int sub(int,int);
int mul(int,int);
int div(int,int);
int main(){
       int a,b;
       char op;
        printf("emter the op :");
    scanf("%c",&op);
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);

    
    switch(op)
    { 
        case '+':
        printf("Addition=%d",add(a,b));
        break;
        case '-':
        printf("Subtraction=%d",sub(a,b));
        break;
        case '*':
        printf("multi=%d",mul(a,b));
        break;
        case '/':
        printf("division=%d",div(a,b));
        break;
        default:
        printf("enter the correct operater");
        break;

    }


}

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}*/



// #include<stdio.h>
// int main()
// {
    
//     char a1='1',a2='2',a3='3';
//     char b1='4',b2='5',b3='6';
//     char c1='7',c2='8',c3='9';


//     int choice,move;
//     char symbol;
    
//     for(move=1;move<=9;move++)
//     {
//         if(move% 2==1)
//         {
//             printf("\n Player 1(X):");
//             symbol='X';
//         }
//         else
//         {
//             printf("\n Player 2 (o):");
//             symbol='o';
//         }
//         scanf("%d",&choice);
//                 if(choice==1 && a1!='x' && a1!='o') a1=symbol;
//         else if(choice==2 && a2!='x' && a2!='o') a2=symbol;
//         else if(choice==3 && a3!='x' && a3!='o') a3=symbol;
//         else if(choice==4 && b1!='x' && b1!='o') b1=symbol;
//         else if(choice==5 && b2!='x' && b2!='o') b2=symbol;
//         else if(choice==6 && b3!='x' && b3!='o') b3=symbol;
//         else if(choice==7 && c1!='x' && c1!='o') c1=symbol;
//         else if(choice==8 && c2!='x' && c2!='o') c2=symbol;
//         else if(choice==9 && c3!='x' && c3!='o') c3=symbol;
//         else
//         {
//             printf("Invalid move! try again.");
//             move--;
//             return 0;
//         }
        
//         printf("\n %c | %c |  %c  \n %c | %c | %c \n %c | %c | %c \n"
//         ,a1,a2,a3,b1,b2,b3,c1,c2,c3);
        
//         if((a1==symbol && a2==symbol && a3==symbol)||
//            (b1==symbol && b2==symbol && b3==symbol)||
//            (c1==symbol && c2==symbol && c3==symbol)|| 
//            (a1==symbol && b1==symbol && c1==symbol)||
//            (a2==symbol && b2==symbol && c2==symbol)|| 
//            (a3==symbol && b3==symbol && c3==symbol)||
//            (a1==symbol && b2==symbol && c3==symbol)|| 
//            (a3==symbol && b2==symbol && c1==symbol))
        
    
//         {
//         if(symbol=='X'){
//           printf("\n player 1 wins!");
//         }else{
//           printf("\nPlayer 2 wins!");
//           return 0;
//         }
//         }

//     }
//     printf("\n Match  Draw!");
//     return 0;
// }
// int game(char a1,char a2,char a3,
//          char b1,char b2,char b3,
//          char c1,char c2,char c3)
//     {
//         return 'Invalid move! try again.';
//     }
// int win1(char a1,char a2,char a3,
//          char b1,char b2,char b3,
//          char c1,char c2,char c3)
//     {
//         return 'player 1 win!';
//     }          
// int win2(char a1,char a2,char a3,
//          char b1,char b2,char b3,
//          char c1,char c2,char c3)
//     {
//         return 'player 2 win!';
//     }          
// int draw (char a1,char a2,char a3,
//          char b1,char b2,char b3,
//          char c1,char c2,char c3)
//     {
//         return 'match draw!';
//     }                           




#include<stdio.h>
int main()
{

    char a1='1',a2='2',a3='3';
    char b1='4',b2='5',b3='6';
    char c1='7',c2='8',c3='9';


    int choice,move;
    char symbol;
    
    for(move=1;move<=9;move++)
    {
        if(move% 2==1)
        {
            printf("\n Player 1(X):");
            symbol='X';
        }
        else
        {
            printf("\n Player 2 (o):");
            symbol='o';
        }
        scanf("%d",&choice);
        printf("\n %c | %c |  %c  \n %c | %c | %c \n %c | %c | %c \n"
        ,a1,a2,a3,b1,b2,b3,c1,c2,c3);

    }
}
int try(char a1,char a2,char a3,
            char b1,char b2,char b3,
            char c1,char c2,char c3,
            char symbol,int choice){
        if(choice==1 && a1!='x' && a1!='o') a1=symbol;
        else if(choice==2 && a2!='x' && a2!='o') a2=symbol;
        else if(choice==3 && a3!='x' && a3!='o') a3=symbol;
        else if(choice==4 && b1!='x' && b1!='o') b1=symbol;
        else if(choice==5 && b2!='x' && b2!='o') b2=symbol;
        else if(choice==6 && b3!='x' && b3!='o') b3=symbol;
        else if(choice==7 && c1!='x' && c1!='o') c1=symbol;
        else if(choice==8 && c2!='x' && c2!='o') c2=symbol;
        else if(choice==9 && c3!='x' && c3!='o') c3=symbol;
        else
        {
            printf("Invalid move! try again.");
            return 0;
        }
        
    }
int game(char a1,char a2,char a3,
         char b1,char b2,char b3,
         char c1,char c2,char c3,
         char symbol){
            if((a1==symbol && a2==symbol && a3==symbol)||
           (b1==symbol && b2==symbol && b3==symbol)||
           (c1==symbol && c2==symbol && c3==symbol)|| 
           (a1==symbol && b1==symbol && c1==symbol)||
           (a2==symbol && b2==symbol && c2==symbol)|| 
           (a3==symbol && b3==symbol && c3==symbol)||
           (a1==symbol && b2==symbol && c3==symbol)|| 
           (a3==symbol && b2==symbol && c1==symbol))
        
        {
        if(symbol=='X'){
          printf("\n player 1 wins!");
        }else{
          printf("\nPlayer 2 wins!");
          return 0;
        }
        }
}
int draw(char a1,char a2,char a3,
         char b1,char b2,char b3,
         char c1,char c2,char c3,
         char symbol)
    {
       printf("\n Match  Draw!");
       return 0;
}    

