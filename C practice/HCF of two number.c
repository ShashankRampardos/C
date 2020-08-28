#include<stdio.h>
main()
{
   int i,hcf,a,b,small;
   printf("Enter two numbers:");
   scanf("%d%d",&a,&b);
   small=a<b?a:b;
   for(i=1;i<=small;i++)
   {
       if(a%i==0&&b%i==0)
        hcf=i;
   }
   printf("HCF of %d and %d is %d",a,b,hcf);
getch();

}
