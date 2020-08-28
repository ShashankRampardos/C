#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
  int *a;
  char i,j,flag=1;
  short n;
printf("Enter length of array:");
scanf("%hd",&n);
a=(int*)malloc(n*4);
printf("Enter numbers in array:\n");
for(i=0;i<n;i++)
{
    printf("[%hi]:",i+1);
    scanf("%d",a+i);
}
for(i=0;i<n;i++)
{  if(i==n-1)
     a[i]=-1;
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j]){
            a[i]=a[j];
       flag=0; break;
        }

    }
if(flag)
    a[i]=-1;
}
for(i=0;i<n;i++)
    printf("\n%d) Next bigger element is %d",i+1,*(a+i));
free(a);
}
