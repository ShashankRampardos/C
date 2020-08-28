#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
    FILE *FP;
    FP=fopen("E:\FH\\Determinamt.txt","a+");

    int a[3][3];
    char i,j;
    int det=0;
    printf("Enter 9 Elements in matrix:");
    fprintf(FP,"\nMatrix:");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);

    printf("The matrix is:\n");
    fprintf(FP,"\n");
    for(i=0;i<3;i++){
            fprintf(FP,"|");
            printf("|");
        for(j=0;j<3;j++)
          {printf("% 4d",a[i][j]);
          fprintf(FP,"% 4d",a[i][j]);}
    printf("|");
    fprintf(FP,"|");
    printf("\n");
    fprintf(FP,"\n");
    }
    a[0][1]=-a[0][1];
    for(i=0;i<3;i++)
    {
      det=det+(a[0][i]*((a[1][i==0?1:0]*a[2][i==2?1:2])-(a[1][i==2?1:2]*a[2][i==0?1:0])));
    }
    printf("\nDeterminant of above matrix is %d",det);
    fprintf(FP,"\nDeterminant of above matrix is %d",det);
    fclose(FP);
getch();
}
