#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
MaxMin(int*,int n,int*,int*);
main()
{
    int *a,n,min,max;
    short int i;
    printf("Enter number of elements to be stored in array:");
    scanf("%i",&n);
    a=(int*)malloc((n+1)*sizeof(int));
    printf("\nEnter elements in array:");
    for(i=0;i<n;i++)
      scanf("%d",a+i);
MinMax(a,n,&min,&max);
printf("\nMaximum element is %d",max);
printf("\nMinimum element is %d",min);

}
MinMax(int *a,int n,int *min,int *max)
{
    int i;
    *max=*a;
    *min=*a;
    for(i=0;i<n;i++)
    {
        if(*max<*(a+i))
        {
            *max=*(a+i);
        }
        else if(*min>*(a+i))
        {
            *min=*(a+i);
        }
    }
}
