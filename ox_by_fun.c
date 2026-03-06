#include <stdio.h>
 

char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';


void display()
{
    printf("\n %c | %c | %c ",a,b,c);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",d,e,f);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c \n",g,h,i);
}


int checkwin()
{
    if(a==b && b==c) return 1;
    if(d==e && e==f) return 1;
    if(g==h && h==i) return 1;
    if(a==d && d==g) return 1;
    if(b==e && e==h) return 1;
    if(c==f && f==i) return 1;
    if(a==e && e==i) return 1;
    if(c==e && e==g) return 1;


    return 0;
}


void marks(int pos, char m)
{
    if(pos==1) a=m;
    else if(pos==2) b=m;
    else if(pos==3) c=m;
    else if(pos==4) d=m;
    else if(pos==5) e=m;
    else if(pos==6) f=m;
    else if(pos==7) g=m;
    else if(pos==8) h=m;
    else if(pos==9) i=m;
}       

int main()
{
    int pos,player=1,move;
    char mark;


    for(move=1; move<=9; move++)
    {
        display();


        if(player==1)
        {
            printf("\nPlayer 1 (X) Enter position: ");
            mark='X';
        }
        else
        {
            printf("\nPlayer 2 (O) Enter position: ");
            mark='O';
        }


        scanf("%d",&pos);


        marks(pos,mark);


        if(move>=5)
        {
            if(checkwin()==1)
            {
                display();
                printf("\nPlayer %d Wins!\n",player);
                return 0;
            }
        }


        if(player==1)
            player=2;
        else
            player=1;
    }


    display();
    printf("\nMatch Draw!\n");


    return 0;
}
