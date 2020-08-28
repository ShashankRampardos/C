#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
MinSmin(int*,int n,int*,int*);
main()
{
    int *a,n,min,smin;
    short int i;
    printf("Enter number of elements to be stored in array:");
    scanf("%i",&n);
    a=(int*)malloc((n+1)*sizeof(int));
    printf("\nEnter elements in array:");
    for(i=0;i<n;i++)
      scanf("%d",a+i);
MinSmin(a,n,&min,&smin);
printf("\nSecond Minimum element is %d",smin);
printf("\nMinimum element is %d",min);

}
MinSmin(int *a,int n,int *min,int *smin)
{
    int i;
    *smin=*a+1;
    *min=*(a);
    for(i=1;i<n;i++)
    {
        if(*min>*(a+i))
        {   *smin=*min;
            *min=*(a+i);

        }
        else
        {
            if(*smin>*(a+i))
                *smin=*(a+i);
        }

    }
}
