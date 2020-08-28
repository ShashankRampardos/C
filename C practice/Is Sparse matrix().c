#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int** create2d(short r,short c)
{
    int **a;
    char i;
    a=(int **)calloc(r,sizeof(int *));
    for(i=0;i<r;i++)
        *(a+i)=(int *)calloc(c,sizeof(int));
    return a;
}
void inpmat(int **a,short r,short c)
{
   char i,j;
   for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",(*(a+i)+j));
}
void outputmat(int **a,short r,short c)
{
    char i,j;
    for(i=0;i<r;i++){
            printf("|");
        for(j=0;j<c;j++)
          printf("% 4d",*(*(a+i)+j));
     printf("|");
      printf("\n");
    }
}
short int issparse(int **a,short r,short c)
{
    char i,j;
    char z=0,nz=0;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        if(*(*(a+i)+j)==0)
            z++;
        else
            nz++;
    }
    if(z>nz)
        return 1;
    else
        return 0;
}
void main(void)
{
int **a;
short r,c;
char flag;

printf("Enter order of matrix in M*N formate:");
scanf("%hi*%hi",&r,&c);
a=create2d(r,c);
printf("Enter %i elements in matrix:",r*c);
inpmat(a,r,c);

printf("In matrix formate:\n");
outputmat(a,r,c);

flag=issparse(a,r,c);

if(flag)
    printf("Above matrix is a Sparse matrix");
else
    printf("Above matrix is not a Sparse matrix");
free(a);
getch();
}
