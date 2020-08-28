#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
MinSmin(int*,int,int*,int*);
main()
{
    int *a,n,max,smax;
    short int i;
    printf("Enter number of elements to be stored in array:");
    scanf("%i",&n);
    a=(int*)malloc((n+1)*sizeof(int));
    printf("\nEnter elements in array:");
    for(i=0;i<n;i++)
      scanf("%d",a+i);
MaxSmax(a,n,&max,&smax);
printf("\nSecond Maximum element is %d",smax);
printf("\nMaximum element is %d",max);

}
MaxSmax(int *a,int n,int *max,int *smax)
{
    int i;
    *smax=*a+1;
    *max=*(a);
    for(i=1;i<n;i++)
    {
        if(*max<*(a+i))
        {   *smax=*max;
            *max=*(a+i);

        }
        else
        {
            if(*smax<*(a+i))
                *smax=*(a+i);
        }

    }
}
