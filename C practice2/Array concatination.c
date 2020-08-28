#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int *a,*b;
    int i,j,n,n1;
    char c;

      printf("Enter number of elements stored in first array:");
      scanf("%i",&n);

    a=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements in array:",n);
    for(i=0;i<n;i++)
        scanf("%d",a+i);

      printf("Enter number of elements to be stored in second array");
        scanf("%i",&n1);

    b=(int*)malloc(n1*sizeof(int));

    printf("\nEnter %d elements in array",n1);
    for(i=0;i<n1;i++)
        scanf("%d",b+i);

    a=realloc(a,(n+n1)*sizeof(int));

    //for(i=0;i<n+n1;i++)
    //    printf(" %d",*(a+i));
    //for(i=0;i<n+n1;i++)
      //  printf(" %d",*(b+i));
    for(i=n,j=0;j<n1;i++,j++)//concatenate array a and array b.
    {
        *(a+i)=*(b+j);
    }

    for(i=0;i<n+n1;i++)
    {printf(" %d",*(a+i));

    }
free(a);
free(b);
    getch();
}
