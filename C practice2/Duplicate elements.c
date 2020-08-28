#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int *a;
    short int i,j,n;
    char c;

      printf("Enter number of elements stored in array:");
      scanf("%d",&n);

    a=(int*)calloc(n,sizeof(int));
    printf("\nEnter %d elements in array:",n);

    for(i=0;i<n;i++)
        scanf("%d",a+i);
  printf("\nDuplicate elements are elements are:");
    for(i=0;i<n;i++)
    { c=0;
        for(j=i+1;j<=n;j++)
        {
            if(*(a+i)==*(a+j))
                c++;
        }
        if(c)
            printf(" %d",*(a+i));

    }
    getch();
}
