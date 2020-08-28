#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
max(int*,int);
min(int*,int);
main()
{
    int *a;
    short int n,i;
    printf("Enter number of elements to be stored in array:");
    scanf("%hi",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
      scanf("%d",a+i);
    printf("Maximum number is %d\n",max(a,n));
    printf("Minimum number is %d\n",min(a,n));
getch();
}
max(int *a,int n)
{
    short int i;
    int max;
    max=*a;
    for(i=0;i<n;i++)
    {
        if(max<*(a+i))
        max=*(a+i);
    }
    return max;
}
min(int *a,int n)
{
    short int i;
    int max;
    max=*a;
    for(i=0;i<n;i++)
    {
        if(max>*(a+i))
        max=*(a+i);
    }
    return max;
}

