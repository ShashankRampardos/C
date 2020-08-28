#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
    int *a,m;
    short int n,i,j,location;
    printf("Enter number of elements to be stored in array:");
    scanf("%hi",&n);
    a=(int*)malloc((n+1)*sizeof(int));
    printf("\nEnter elements in array in ascending order:");
    for(i=0;i<n;i++)
      scanf("%d",a+i);

  printf("\nEnter new a element to be stored in array:");
  scanf("%d",&m);
  printf("Enter Location where the value to be inserted:");
  scanf("%hi",&location);
  location--;
  printf("\nThe exist array list:");
     for(i=0;i<n;i++)
        printf(" %d",*(a+i));
  for(i=n-1,j=n;i>=location;i--,j--)
  {
     *(a+j)=*(a+i);
  }
  *(a+location)=m;
  printf("\nAfter insert the list is:");
  for(i=0;i<n+1;i++)
    printf(" %d",*(a+i));
    free(a);
   getch();
}
