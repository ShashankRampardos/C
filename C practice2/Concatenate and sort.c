#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
min(int*,int,int*);
sort(int *a,int n,int *sorted)
{
    int swap,cpy_n;
    short int i,location=0;
    cpy_n=n;
    for(i=0;n!=0;i++)
    {
        min(a,n,&location);
        *(sorted+i)=*(a+location);
      swap=*(a+location);
      *(a+location)=*(a+(n-1));
      *(a+(n-1))=swap;
      free(a+(n-1));
      n--;

    }
printf("%d",n);

}
min(int *a,int n,int *location)
{
    int i,min;
    char flag=1;
    min=*a;
    for(i=0;i<n;i++)
    {
        if(min<*(a+i)){
            min=*(a+i);
        *location=i;
        flag=0;
        }

    }
    if(flag)
          *location=0;
}
main()
{
    int *a,*b,*sorted;
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
      *(a+i)=*(b+j);

    printf("Array after concatenation:");
    for(i=0;i<n+n1;i++)
    {printf(" %d",*(a+i));

    }
    sorted=(int*)malloc((n+n1)*sizeof(int));
    sort(a,(n+n1),sorted);
printf("Array after sort:");
for(i=0;i<n+n1;i++)
   printf(" %d",*(sorted+i));


free(a);
free(b);
    getch();
}

