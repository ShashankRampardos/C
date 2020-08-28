#include<stdio.h>
main()
{
   long int pon;
   int n;
   short int p;
   printf("enter number and power");
   scanf("%d%hd",&n,&p);
   pon=n;
   while(p!=1)
   {
       pon*=n;
       p--;
   }
   printf("Result:%ld",pon);
getch();

}
