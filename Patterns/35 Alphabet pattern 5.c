#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 short int i,j;
char k=64,ck;
 for(i=1;i<=5;i++)
 {   k=k+i;
     ck=k;
     for(j=1;j<=5;j++)
     {
         if(j>=6-i)
         {
             printf("%c",ck--);

         }
         else
            printf(" ");
     }
     printf("\n");
 }
getch();
}
