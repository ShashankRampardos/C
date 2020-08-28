#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int** create2d(short int r,short int c)
{
    int **a;
    char i;
    a=(int **)calloc(r,sizeof(int*));
    for(i=0;i<r;i++)
        *(a+i)=(int *)calloc(c,sizeof(int));
    return a;
}
int transpose_mat(int **a,int **b,short int r,short int c)
{
    char i,j;
    char m,n;
    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
        *(*(b+j)+i)=*(*(a+i)+j);

    }

}
void inpmat(int **a,short int r,short int c)
{
    char i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          scanf("%d",(*(a+i)+j));
}
void outmat(int **a,short int r,short int c)
{
    char i,j;
    for(i=0;i<r;i++)
    {
        printf("|");
        for(j=0;j<c;j++)
          printf("%d",*(*(a+i)+j));
       printf("|");
       printf("\n");
    }
}
void main(void)
{
    int **a,**b,sum;
    short int r,c;
    printf("Enter order of matrix in (m*n) formate:\n");
    scanf("%hd*%hd",&r,&c);
    a=create2d(r,c);
    b=create2d(c,r);
printf("Enter %d elements for matrix:\n",r*c);
    inpmat(a,r,c);
transpose_mat(a,b,r,c);
printf("In matrix form:\n");
    outmat(a,r,c);
printf("Transpose of a given matrix:\n");
    outmat(b,c,r);
}
