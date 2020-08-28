#include<stdio.h>
main()
{
    int i,n,ps=0,c=0,j;
    printf("Enter Nth number for prime number:");
    scanf("%d",&n);
printf("Prime numbers are ");
for(i=2;i<=n;i++)
{c=0;
    for(j=2;j<=i;j++)
  {
    if(i%j==0)
    {
        c++;
        if(c>1)
            break;
    }
  }
if(c==1)
{ps+=i;
printf("%d ",i);
}
}
printf("\nSum of Prime numbers=%d",ps);
getch();

}
