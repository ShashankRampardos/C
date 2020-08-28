#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
  int *a,*b;
  char i,j;
  short n,count,count2=0;
printf("Enter length of array:");
scanf("%hd",&n);
a=(int*)malloc(n*4);
b=(int*)malloc(n*4);
printf("Enter numbers in array:\n");
for(i=0;i<n;i++)
{  b[i]=-1;
    printf("[%hi]:",i+1);
    scanf("%d",a+i);
}
printf("Repetitive elements:");
for(i=0;i<n;i++){
        count=1;
    for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j]&&b[j]!=0){
            count++;
            b[j]=0;
            count2++;
            }
       }
if(b[i]!=0)
    if(count>=2)
      printf("% 4d",a[i]);
}
if(count2==0)
    printf(" None");
getch();
free(a);
}
