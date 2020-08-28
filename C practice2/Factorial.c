#include<stdio.h>
#include<conio.h>
void main(void)
{
   long long int i,n;
   printf("Enter a number to find factorial of:");
   scanf("%lld",&n);
   for(i=n-1;i>=1;i--)
   {
       n*=i;
   }
   printf("Factorial of given number is:%lld",n);
    getch();

}
