#include<stdio.h>
main()
{
int n,c=0,i;
printf("Enter a number to check whether it is Prime of not:");
scanf("%d",&n);

for(i=2;n>=i;i++)
{
    if(n%i==0)
    {
        c++;
        if(c>1)
            {c=0;
             break;
            }
    }

}
if(n==2||n==1)
printf("%d is not a prime number",n);
else if(c)
  printf("%d is a Prime number",n);
else
        printf("%d is not a Prime number",n);
getch();
}
