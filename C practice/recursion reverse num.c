#include<stdio.h>
#include<conio.h>
int revs(int n,int rev);
void main(void)
{
    int n;
    printf("Enter a number to find it's reverse:");
    scanf("%d",&n);
    printf("Reverse is %d",revs(n,0));
}
int revs(int n,int rev)
{  int x;
    if(n==0)
        return rev;
    else{
    x=n%10;
    rev=rev*10+x;
    revs(n/10,rev);
    }

}
