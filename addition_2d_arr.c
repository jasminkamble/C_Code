#include<stdio.h>
int main(){
    int i,j,r,c,R,C;


    printf("Enter size of matrix 1:");
    scanf("%d%d",&r,&c);
    int mat1[r][c];
    printf("\n");

    printf("Enter the size os matrix 2:");
    scanf("%d%d",&R,&C);
    int mat2[R][C];
    printf("\n");

    printf("Enter the metrix elements mat 1:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n");
    
    printf("Enter the metrix elements mat 2:");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n");

    printf("printing the matrix element of mat 1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

    printf("printing the matrix element of mat 2\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    int mat3[i][j];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            printf("addition of each element= %d ",mat3[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat3[i][j]);

        }
        printf("\n");
    }

    return 0;
}