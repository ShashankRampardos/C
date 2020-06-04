#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<process.h>
void main()
{
   int a,b;
   char opt,sel;
start:
   printf("SIMPLE CALCULATOR");
   printf("\nPerform operation with two numbers and press enter after entering each number AND operator\n");
   scanf("%d",&a);
   fflush(stdin);
   scanf("%c",&opt);
   fflush(stdin);
   switch(opt)
   {
   case '+':
    scanf("%d",&b);
    printf("\n%d",a+b);
    break;
   case '-':
    scanf("%d",&b);
    printf("\n%d",a-b);
    break;
   case '*':
    scanf("%d",&b);
    printf("\n%d",a*b);
    break;
   case '/':
    scanf("%d",&b);
    printf("\n%f",(float)a/b);
    break;
   case '%':
    scanf("%d",&b);
    printf("\n%f",a%b);
    break;
   default:
    printf("\nEnter right Operator \n(+ - * / %)");
    getch();
    system("cls");
    goto start;
   }
middle:
   printf("\nDo you want to continue(yes/no):");
   scanf("%c",&sel);
   fflush(stdin);
   if(sel=='y'||sel=='Y')
   {   getch();
       system("cls");
       goto start;
   }
   else if(sel=='n'||sel=='N')
   {
       getch();
       exit(0);
   }
   else
   {  printf("\nEnter yes or no.");//control directly jump to else part without meeting to if or else if, why?(this happen only once then program runs correctly)
      getch();                     //is it cause of flush() between scanf and if, but removing it also gives trouble. 
      system("cls");
      goto middle;
   }


}

