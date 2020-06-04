#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<process.h>
void main()
{
   int a,b;
   char sel;
start:
   printf("\nEnter two angles:");
   scanf("%d%d",&a,&b);
   //fflush(stdin);
   printf("\nThird angle is %d",180-(a+b));
middle:
   printf("\nDO you want to continue(yes/no):");
   scanf("%c",&sel);
   if(sel=='y'||sel=='Y')
    {   getch();
        system("cls");
        goto start;}
   else if(sel=='n'||sel=='N')
   {
       getch();
       exit(0);
   }
   else//Jump to here without checking if
   {
       printf("\nEnter yes or no");
       getch();
       system("cls");
       goto middle;
   }


}

