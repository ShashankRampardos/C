#include<stdio.h>
#include<conio.h>

void main(void)
{
   int up,down;
   printf("Enter Upper limit and Lower limit for natural numbers:");
   scanf("%d%d",&down,&up);
   nat(up,down);
}
void nat(int u,int d)
{if(d>u)
return;
    printf("% 2d",d);
d++;
nat(u,d);

}
