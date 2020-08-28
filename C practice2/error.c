#include<windows.h>
#include<stdio.h>
//Program to find third angle of a triangle and re use the program in run time without terminating it.
main()
{
   int a,b;
   char sel;
start://goto tag
   printf("\nEnter two angles:");
   scanf("%d%d",&a,&b);
   printf("\nThird angle is %d",180-(a+b));
middle://goto tag
   printf("\nDO you want to continue(yes/no):");
   scanf("%c",&sel);//ISSUE 1:scanf() not run in first time and control branch to else part at the end,why? Please run the program to understand what I'm saying.
   fflush(stdin);//user input yes or no which is a string but we check only first letter then remaining letters stay left in STDIN so fflush() used here.
   if(sel=='y'||sel=='Y')//in case user enter yes or Yes we only check first letter
    {   getch();
        system("cls");
        goto start;}
   else if(sel=='n'||sel=='N')//in case no or No or NO or nO.
   {
       getch();
       exit(0);
   }
   else//ISSUE 1 PART !:Jump to here without checking if,why?
   {
       printf("\nEnter yes or no");//in case user enter first letter other than y,Y,n,N.
       getch();
       system("cls");
       goto middle;//jump to yes/no statement.
   }

getch();
}

