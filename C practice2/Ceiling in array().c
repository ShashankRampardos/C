#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ceiling(int *a,short size,int n)
{
    char i;
    char flag=0;
    int ceil;
    int max=n;
    for(i=0;i<size;i++)
    {
        if(max<=*(a+i)){
           max=*(a+i);
           flag=1;
        }
    }
    if(flag){
    for(i=0;i<size;i++)
    {
        if(n<=*(a+i)&&*(a+i)<max)
            //ceil=max;
            max=*(a+i);
    }
    }
    else
        printf("No Ceiling found");
if(flag)
printf("Ceiling of %d is %d",n,max);
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
     ceiling(a,n,num);
     getch();
     free(a);
}

