#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int **create2d(short int r)
{
  int **a;
  char i;
  a=(int**)calloc(r,sizeof(int*));
  for(i=0;i<r;i++)
    *(a+i)=(int*)calloc(r,sizeof(int));
  return a;
}
void inpmat(int **a,short int r)
{
   char i,j;
   for(i=0;i<r;i++)
     for(j=0;j<r;j++)
       scanf("%d",(*(a+i)+j));
}
void outmat(int **a,short int r)
{
    char i,j,k=0;
    for(i=0;i<r;i++){
            printf("|");
        for(j=0;j<r;j++){
           if(i>=k&&j>=k)
            printf("%d",*(*(a+i)+j));
           else
           printf(" ");
        }
          printf("|");
          printf("\n");
        k++;
    }
}
/*void uptriangmat(int **a,short int r,short int c)
 {
     char i,j;
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
         printf("\n\nSum of row %d is %d",i+1,sumR);
         if(i<c)
         printf("\n\nSum of column %d is %d",i+1,sumC);
     }
 }*/
void freee(int **a,short r)
{
    char i,j;
    for(i=0;i<r;i++)
        for(j=0;j<r;j++)
          free((*(a+i)+j));
}
void main(void)
{
    int **a;
    short int r;
    printf("Enter size of a square matrix:");
    scanf("%hi",&r);
a=create2d(r);
printf("Enter %hi elements in matrix:\n",r*r);
inpmat(a,r);
printf("In matrix form:\n");
outmat(a,r);
//uptriangmat(a,r,c);
freee(a,r);
getch();
}








