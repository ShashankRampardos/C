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
   printf("\n");
   for(i=0;i<r;i++)
    for(j=0;j<c;j++){
            printf("[%hi][%hi]=",i,j);
      scanf("%d",(*(a+i)+j));
    }
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
short int isIdentitymat(int **a,short r,short c)
{
    char i,j;
    short e=1;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
    {
        if(i==j){
            if(*(*(a+i)+j)!=1)
           e=0;}

        else if(*(*(a+i)+j)!=0)
              e=0;
    }
  }
     return e;
}
void main(void)
{
int **a;
short r;
short int flag;

printf("Enter number of rows for square matrix:");
scanf("%hi",&r);

a=create2d(r,r);
printf("Enter %i elements in first matrix:",r*r);
inpmat(a,r,r);

printf("1)\n");
printf("In matrix formate:\n");
outputmat(a,r,r);

flag=isIdentitymat(a,r,r);
if(flag)
    printf("Above matrix is a Identity matrix:");
else
    printf("Above matrix is not a Identity matrix");
free(a);
getch();
}
