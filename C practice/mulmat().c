#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int **create2d(char r,char c)
{
    int **A;
    char i;
    A=(int**)calloc(r,sizeof(int*));
    for(i=0;i<r;i++)
        *(A+i)=(int*)calloc(c,sizeof(int));
    return A;
}
void mulmat(int **A,int **B,int **M,short int r,short int c,short int sr)
{
    char i,j;
    char k;
    int sum;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++,k++)
        { sum=0;
            for(k=0;k<sr;k++)
            sum=sum+(A[i][k]*B[k][j]);
         M[i][j]=sum;
        }

    }

}
void inpmat(int **A,char r,char c)
{
    char i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        scanf("%d",(*(A+i)+j));
}
void outmat(int **A,char r,char c)
{
    char i,j;
    for(i=0;i<r;i++){
            printf("|");
        for(j=0;j<c;j++)
        printf(" %d",*(*(A+i)+j));
    printf("|");
    printf("\n");
    }

}
void freee(int **A,short int r,short int c)
{
    char i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          free((*(A+i)+j));
}
int main()
{
    short int fr,fc,sr,sc;//first row, first column, second row, second column
    int **a,**b,**m;
    char i,j;
 printf("Enter row and column for first matrix:");
 scanf("%hi%hi",&fr,&fc);
 printf("Enter row and column for second matrix:");
 scanf("%hi%hi",&sr,&sc);
a=create2d(fr,fc);
b=create2d(sr,sc);
m=create2d(fr>sr?fr:sr,sc>fc?sc:fc);
if(!(fc==sr))
{   getch();
printf("Enter valid row and column for both matrix");
    exit(0);
}
else if(!(fr==sc))
    {
        getch();
printf("Enter valid row and column for both matrix");
    exit(0);
    }
 printf("\nEnter elements for first matrix:");
inpmat(a,fr,fc);

 printf("\nEnter elements for second matrix:");
inpmat(b,sr,sc);

  printf("\nFirst matrix:\n");
outmat(a,fr,fc);

  printf("\nSecond matrix:\n");
outmat(b,sr,sc);
mulmat(a,b,m,fr,sc,sr);

  printf("\nMultiplied matrix:\n");
outmat(m,fr,sc);
    freee(a,fr,fc);
    freee(b,sr,sc);
    freee(m,fr,sc);
return 0;

}
