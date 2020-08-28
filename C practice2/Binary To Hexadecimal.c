#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 char b[32];
 char hex[10],s=1;
 char i,l,j=0;
 printf("Enter a binary number:");
 scanf("%s",b);
 for(i=0;i<10;i++)
 {
     hex[i]=0;
 }
 for(l=0;b[l]!=0;l++);
 for(i=l-1;i>=0;i--)
 {
     if(b[i]=='1')
        hex[j]+=s;
     s*=2;
     if(s==16)
     {
         s=1;
         j++;
     }

 }
 strrev(hex);

 for(i=0;hex[i]!=0;i++)
 {  //printf("%d ",hex[i]);
     if(hex[i]<10)
        printf("%d",hex[i]);
     else if(hex[i]==10)
        printf("A");
     else if (hex[i]==11)
        printf("B");
     else if(hex[i]==12)
        printf("C");
     else if (hex[i]==13)
        printf("D");
     else if (hex[i]==14)
        printf("E");
     else if (hex[i]==15)
        printf("F");
 }
getch();
}
