#include<stdio.h>
#include<conio.h>
nat(int,int);
void main(void)
{
    int un,ln;
    printf("Enter lower limit and upper limit for natural numbers:");
    scanf("%d%d",&ln,&un);
    nat(ln,un);
}

int nat(int la,int ua)
{

    if(ua<=la)
        return la;
    else
    printf("% 2d",nat(la,ua-1));
    return ua;


}


