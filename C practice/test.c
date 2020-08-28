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
void sumchecker(int *A,short n,int sum)
{
    char i,j;
    int a,b;
    char flag=0;
    for(i=0;i<n;i++){
            a=A[i];
        for(j=i+1;j<n;j++)
        {
           if(A[i]+A[j]==sum){
             b=A[j];
             flag=1;
             break;
           }
         }
         if(flag)
            break;
     }
     if(flag){
        printf("Pair of elements can make the given sum by the value of index %hi and %hi",i+1,j+1);
        printf("\nTwo pairs are %d and %d",a,b);
     }
     else
        printf("No sum of pair exist in array for %d",sum);
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
int *a,sum;
short r;
short int flag;
char i;

printf("Enter number of elements to be stored in array:");
scanf("%hi",&r);

a=(int*)calloc(r,sizeof(int));
printf("Enter %hi elements in first matrix:",r);
for(i=0;i<r;i++)
    scanf("%d",a+i);
printf("Enter a number to find pair of its sum:");
scanf("%d",&sum);
sumchecker(a,r,sum);


free(a);
getch();
}
