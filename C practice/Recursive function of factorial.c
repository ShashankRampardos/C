#include<stdio.h>
#include<conio.h>
long long fact(int);
void main(void)
{
    int n;
    printf("Program to find factorial of given number:\n");
    printf("------------------------------------------\n");
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial of %d is %lld",n,fact(n));
    getch();
}
long long fact(int a)
{
    long long f;
    if(a==1)
        return a;
    f=a*fact(a-1);
    return f;
}
