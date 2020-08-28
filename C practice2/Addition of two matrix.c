#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int** create2D(short int r,short int c)
{ short int i;
  int **A;
    A=(int**)malloc(sizeof(int*)*r);

     for(i=0;i<r;i++)
        *(A+i)=(int*)malloc(sizeof(int)*c);
return A;
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
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          scanf("%d",(*(a+i)+j));
printf("\nInput for second matrix:");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          scanf("%d",(*(b+i)+j));


for(i=0;i<r;i++){
    for(j=0;j<c;j++)
    {
        a[i][j]+=b[i][j];
    }
  }
for(i=0;i<r;i++){
   printf("|");
    for(j=0;j<c;j++)
    {
        printf("%d",a[i][j]);
    }
   printf("|");
   printf("\n");
}
void free(a,r);
void free(b,r);

}
