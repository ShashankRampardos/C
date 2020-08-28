#include<stdio.h>
#include<conio.h>
nat(int);
void main(void)
{
    int n;
    printf("Enter range of number to print Natural numbers within:");
    scanf("%d",&n);
    nat(++n);
}

int nat(int a)
{
    if(1>=a)
   return 1;
   else{
     printf("% 2d",nat(a-1));
     return a;
   }
}
