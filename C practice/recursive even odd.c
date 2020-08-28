#include<stdio.h>
#include<conio.h>
int even_odd(int d,int u);
void main(void)
{   int lo,up;

   printf("Enter lower limit and upper limit:");
   scanf("%d%d",&lo,&up);

   printf("sum of even/odd numbers in given range is %d",even_odd(lo,up));
}
int even_odd(int d,int u)
{

if(d>u)
    return 0;
else
return (d+even_odd(d+2,u));

}

