#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

sort(int *b,int n)
{
    int swap;
    short int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(b+i)<*(b+j))
            {
               *(b+i)=*(b+i)+*(b+j);
               *(b+j)=*(b+i)-*(b+j);
               *(b+i)=*(b+i)-*(b+j);
            }
        }
    }
}
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
  sort(a,n);
  printf("After sorting in Ascending order:");
  for(i=0;i<n;i++)
    printf(" %d",*(a+i));
    free(a);
   getch();
}
