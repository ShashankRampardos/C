#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
max(int*,int);
min(int*,int);
main()
{
    int *a,*b,*c;
    short int n,i,j,k;
    printf("Enter number of elements to be stored in array:");
    scanf("%hi",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
      scanf("%d",a+i);
   b=(int*)malloc(n==1?1:n/2*sizeof(int));
   c=(int*)malloc((n%2==0?n/2:n/2+1)*sizeof(int));

   for(i=0,j=0,k=0;i<n;i++)
   {
       if(*(a+i)%2==0){
        *(b+j)=*(a+i);j++;
       }
       else{
        *(c+k)=*(a+i);k++;
       }
   }
   free(a);
   printf("Even elements are:");
   for(i=0;i<j;i++)
    printf(" %d",*(b+i));
   printf("\nOdd elements are:");
   for(i=0;i<k;i++)
    printf(" %d",*(c+i));
    free(b);
    free(c);
   getch();
}
