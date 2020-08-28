#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int flooring(int *a,short size,int n)
{
    char i;
    char flag=0;
    int ceil;
    int min=n;
    for(i=0;i<size;i++)
    {
        if(min>=*(a+i)){
           min=*(a+i);
           flag=1;
        }
    }
    if(flag){
    for(i=0;i<size;i++)
    {
        if(min<=*(a+i)&&*(a+i)<=n)
            //ceil=min;
            min=*(a+i);
    }
    }
    else
        printf("No floor found");
if(flag)
printf("Floor of %d is %d",n,min);
}
main()
{
    int *a,num;
    char i;
    short n;
    printf("Enter size of array:");
    scanf("%hi",&n);
    a=(int*)calloc(n,4);
    printf("Enter elements in array:\n");
     for(i=0;i<n;i++)
     {
         printf("[%hi]:",i+1);
         scanf("%d",a+i);
     }
     printf("\nEnter a number to search ceiling of:");
     scanf("%d",&num);
     flooring(a,n,num);
     getch();
     free(a);
}

