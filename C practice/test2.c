#include<stdio.h>
#include<conio.h>

void main(void)
{   int lo,up;

   printf("Enter lower limit and upper limit:");
   scanf("%d%d",&lo,&up);
   printf("Even/Odd numbers between %d and %d are:",lo,up);
   even_odd(lo,up);
}
int even_odd(int d,int u)
{
if(d>u)
    return;

printf("% 2d",d);
even_odd(d+2,u);
}

