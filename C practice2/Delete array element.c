#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
    int *a,n;
    short int i,j,location;
    printf("Enter number of elements to be stored in array:");
    scanf("%hi",&n);
    a=(int*)malloc((n+1)*sizeof(int));
    printf("\nEnter elements in array in ascending order:");
    for(i=0;i<n;i++)
      scanf("%d",a+i);


 printf("Enter location of element to be deleted in array:");
 scanf("%hi",&location);
 location--;
 for(i=location;i<n;i++)
 {
 *(a+i)=*(a+(i+1));

 }
 n--;
 free(a+n);
printf("Array after deletion:");
 for(i=0;i<n;i++)
  printf(" %d",a[i]);


   getch();
free(a);
}
