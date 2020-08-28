#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
    int **a;
    short int i,j,r,c;
    printf("Enter a Number of rows:");
    scanf("%hi",&r);
    printf("Enter number of Columns:");
    scanf("%hi",&c);
    a=(int**)malloc(sizeof(int*)*r);
    for(i=0;i<r;i++)
     a[i]=(int*)malloc(sizeof(int)*c);
for(i=0;i<r;i++)
    for(j=0;j<c;j++)
     scanf("%d",(*(a+i)+j));

for(i=0;i<r;i++){
    printf("|");
    for(j=0;j<c;j++)
     printf("%d",*(*(a+i)+j));
    printf("|");
    printf("\n");
}
free(a);
}
