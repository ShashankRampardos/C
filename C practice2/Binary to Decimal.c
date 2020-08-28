#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    char b[32];
    int bin;
    char i,l,p=0;
    int dec=0;
printf("Enter a Binary number:");
scanf("%s",b);
   for(l=0;b[l]!=0;l++);
   for(i=l-1;i>=0;i--)
   { (char)b[i];
       if(b[i]=='1')
        b[i]=1;
     if(b[i]=='0')
        b[i]=0;
        bin=b[i]*pow(2,p);
       p++;
       dec+=bin;

    }
   printf("In Decimal number system:%d",dec);
   getch();

}
