#include<conio.h>
#include<stdio.h>
int fib(int);
void main(void)
{
    int a,n;
    printf("Enter strength of Fibonacci series:");
    scanf("%d",&n);
    printf("Fibonacci numbers %d times:",n);
    for(a=0;a<n;a++)
    {
        printf("% 2d",fib(a));
    }
    getch();
}
int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;

    return (fib(n-2)+fib(n-1));
}
