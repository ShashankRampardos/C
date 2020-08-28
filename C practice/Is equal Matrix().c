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
            printf("\n[%hi][%hi]=",i,j);
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
short int isequal(int **a,int **b,short r,short c)
{
    char i,j;
    short e=1;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
    {
        if(a[i][j]!=b[i][j]){
            e=0;
            break;
        }
    }
        if(!e)
            break;
      }
     return e;
}
void main(void)
{
int **a,**b;
short r,c,m,n;
short int flag;

printf("Enter order of first matrix in M*N formate:");
scanf("%hi*%hi",&r,&c);
printf("Enter order of second matrix in M*N formate:");
scanf("%hi*%hi",&m,&n);
if(r!=m)
{
    printf("Matrices cannot be compared since there order not equal");
    getch();
    exit(0);
}
else if(c!=n)
{
    printf("Matrices cannot be compared since there order not equal");
    getch();
    exit(0);
}

a=create2d(r,c);
b=create2d(m,n);
printf("Enter %i elements in first matrix:",r*c);
inpmat(a,r,c);
printf("Enter %i elements in second matrix:",m*n);
inpmat(b,m,n);

printf("1)\n");
printf("In matrix formate:\n");
outputmat(a,r,c);
printf("2)\n");
printf("In matrix formate:\n");
outputmat(b,m,n);

flag=isequal(a,b,r,c);
if(flag)
    printf("Both matrices are equal");
else
    printf("Both matrices are not equal");
free(a);
free(b);
getch();
}
