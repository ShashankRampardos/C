#include<stdio.h>
#include<conio.h>
main()
{
   int n,n1,n2,r;
   int c=0,arm=0;
   printf("Enter a last range of Armstrong number:");
   scanf("%d",&r);
   printf("Armstrong numbers are: ");

   for(n2=0;n2<=r;n2++)
{   arm=0;
    c=0;
    n=n2;
    n1=n;
   while(n1!=0)
   {
       n1/=10;
       c++;
   }
   while(n!=0)
   {
       n1=n%10;
       arm=arm+pow(n1,c);
       n/=10;
   }n1=n2;
   if(arm==n1)
    printf("%d ",arm);
}


    getch();

}
