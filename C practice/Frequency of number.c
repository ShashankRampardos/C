#include<stdio.h>
main()
{
    int n,cpyn;
    char lastn,c=0,i=0,j=1;
printf("Enter a number to find frequency of each digit:");
scanf("%d",&n);
while(j<=9)
{ c=0;
    cpyn=n;
   while(cpyn!=0)
   {
      lastn=cpyn%10;
      if(lastn==j)
      c++;
      cpyn/=10;
   }
if(c>0)
printf("Frequency of %d is %d\n",j,c);
j++;
i++;


}

getch();

}
