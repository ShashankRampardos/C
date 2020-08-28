void main(void);
int sum(int);
#include<stdio.h>
#include<conio.h>
void main(void)
{
    int n;
    printf("Sum of all natural numbers in given range\n");
    printf("------------------------------------------\n");
    printf("Enter range of number:");
    scanf("%d",&n);
printf("Sum of all natural numbers in %d range is:%d",n,sum(n));
}
int sum(int a)
{   int s;
  if(a==1)
   return;///"a" did not returned here=
///                                    |
    s=a+sum(a-1);///                   |
///                                    |
    return;///neither "s"==============
/// but program run correctly
/// How recursion done without return
/// any value?

}









///return;
