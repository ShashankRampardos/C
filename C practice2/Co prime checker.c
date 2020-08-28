#include<stdio.h>
main()
{
    int i,a,b;
    printf("Enter two numbers to check co-factors:");
    scanf("%d%d",&a,&b);

   for(i=a<b?a:b;i>=1;i--)
    if(a%i==0&&b%i==0)
    break;
    printf("HCF Is %d\n",i);
   if(i==1)
    printf("%d and %d are Co prime numbers",a,b);
   else
    printf("%d and %d are regular numbers",a,b);
getch();

}
