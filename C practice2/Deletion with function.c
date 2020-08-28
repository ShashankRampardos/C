#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
deletion(int*,short int,int*);
main()
{
    int *a,n;
    short int i,location;
    printf("Enter number of elements to be stored in array:");
    scanf("%hi",&n);
    a=(int*)malloc((n+1)*sizeof(int));
    printf("\nEnter elements in array in ascending order:");
    for(i=0;i<n;i++)
      scanf("%d",a+i);

bottom:
 printf("\nEnter location of element to be deleted in array:");
 scanf("%hi",&location);
 if(location>=n){
    printf("\nEnter location in array range");
    goto bottom;}
 location--;

deletion(a,location,&n);
printf("\nArray after deletion:");
  for(i=0;i<n;i++)
  printf(" %d",*(a+i));


   getch();
free(a);
}
deletion(int *a,short int loc,int *n)
{
      short int i;
 for(i=loc;i<*n;i++)
 {
 *(a+i)=*(a+(i+1));

 }
 (*n)--;
free(a+(*n));
}
