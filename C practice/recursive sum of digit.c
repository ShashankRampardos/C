#include<stdio.h>
#include<conio.h>
int sum(int n,int s);
void main(void)
{
    int n;
    printf("Enter a number to find it's reverse:");
    scanf("%d",&n);
    printf("Sum of %d digits is %d",n,sum(n,0));
}
int sum(int n,int s)
{  int x;
    if(n==0)
        return s;
    else{
    x=n%10;
    s=s+x;
    sum(n/10,s);
    }

}

