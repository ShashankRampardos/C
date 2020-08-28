#include<stdio.h>
#include<conio.h>
int GCD(int ,int,int);
void main(void)
{
    int a,b;
printf("Enter two numbers to find HCF of:");
scanf("%d%d",&a,&b);
printf("GCD of %d and %d is %d",a,b, GCD(a,b,a<b?a:b) );

}
int GCD(int a,int b,int i)
{
    if(i<1)
    return 0;

    if(a%i==0&&b%i==0)
        return i;
    else
        GCD(a,b,i-1);


}
