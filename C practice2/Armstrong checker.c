#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
   int arm=0,n,n1,n2,c=0;
   printf("Enter a number to check Armstrong:");
   scanf("%d",&n);
   n1=n;
   while(n1!=0)
   {
       n1/=10;
       c++;
   }n2=n;
   while(n!=0)
   {
       n1=n%10;
       arm=arm+pow(n1,c);
       n/=10;
   }
   printf("%d\n",arm);
   if(arm==n2)
    printf("Armstrong");
   else
    printf("Not Armstrong");




    getch();

}
