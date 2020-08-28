#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int **create2d(short int r,short int c)
{
  int **a;
  char i;
  a=(int**)calloc(r,sizeof(int*));
  for(i=0;i<r;i++)
    *(a+i)=(int*)calloc(c,sizeof(int));
  return a;
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
    for(i=0;i<r;i++){
            printf("|");
        for(j=0;j<c;j++)
            printf("%d",*(*(a+i)+j));
          printf("|");
          printf("\n");
    }
}
void sumRC(int **a,short int r,short int c)
 {
     char i,j;
     int sumR,sumC;
     for(i=0;i<3;i++)
     {   sumR=0;sumC=0;
         for(j=0;j<(r>c?r:c);j++)
         {   if(j<c)
             sumR+=a[i][j];
             if(j<r)
             sumC+=a[j][i];
         }
         //printf("\n%d",i);
         printf("\n%d)",i+1);
         if(i<r)
         printf("\n\nSum of row %d is %hd",i+1,sumR);
         if(i<c)
         printf("\n\nSum of column %hd is %d",i+1,sumC);
     }
 }
void freee(int **a,short r,short c)
{
    char i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          free((*(a+i)+j));
}
void main(void)
{
    int **a;
    short int r,c;
    printf("Enter order of matrix in m*n formate:");
    scanf("%hi*%hi",&r,&c);
a=create2d(r,c);
printf("Enter %hi elements in matrix:\n",r*c);
inpmat(a,r,c);
printf("In matrix form:\n");
outmat(a,r,c);
sumRC(a,r,c);
freee(a,r,c);
getch();
}








