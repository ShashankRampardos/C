#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int **create2D(short int r,short int c)
{ short int i;
  int **A;
    A=(int**)malloc(sizeof(int*)*r);

     for(i=0;i<r;i++)
        *(A+i)=(int*)malloc(sizeof(int)*c);
return A;
}
void submat(int **A,int **B,int r,int c)
{   short int i,j;
for(i=0;i<r;i++)
    for(j=0;j<c;j++)
     *(*(A+i)+j)-=*(*(B+i)+j);
}
void inpmat(int **A,int r,int c)
{
    int i,j;
   for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          scanf("%d",(*(A+i)+j));
}
void freee(int **A,int r)
{
    int i;
    for(i=0;i<r;i++)
        free(A+i);
}
void main(void)
{
    int **a,**b;
    short int i,j,r,c;
    printf("Enter a Number of rows :");
    scanf("%hi",&r);
    printf("Enter number of Columns:");
    scanf("%hi",&c);

a=create2D(r,c);
b=create2D(r,c);
printf("Input for first matrix:");
inpmat(a,r,c);
printf("\nInput for second matrix:");
inpmat(b,r,c);
submat(a,b,r,c);
getch();
for(i=0;i<r;i++){
   printf("|");
    for(j=0;j<c;j++)
    {
        printf("%d",a[i][j]);
    }
   printf("|");
   printf("\n");
}
freee(a,r);
freee(b,r);

}
