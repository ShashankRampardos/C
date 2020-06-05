#include<stdio.h>
#include<windows.h>
void main()
{
   int a,b;//to hold two numbers.
   char opt,sel;//opt to hold operator and sel to hold y or n.
start:
   printf("SIMPLE CALCULATOR");
   printf("\nPerform operation with two numbers and press enter after entering each number and operator\n");
   scanf("%d",&a);
   fflush(stdin);
   scanf("%c",&opt);
   switch(opt)                          //(Operation will be like)
   {                                    //24     (first number)
   case '+'://in case of +.              //*      (Operator)
    scanf("%d",&b);                     //43     (Second number)
    printf("\n%d",a+b);                 //1032   (result)
    break;
   case '-'://in case of -.
    scanf("%d",&b);//operator input.
    printf("\n%d",a-b);
    break;
   case '*'://in case of *.
    scanf("%d",&b);
    printf("\n%d",a*b);
    break;
   case '/'://in case of /.
    scanf("%d",&b);
    printf("\n%f",(float)a/b);//type casting.
    break;
   case '%'://in case of %.
    scanf("%d",&b);
    printf("\n%d",a%b);
    break;
   default://in case of wrong operator.
    printf("\nEnter right Operator \n(+ - * / %)");
    getch();
    system("cls");
    goto start;
   }
middle:
   printf("\nDo you want to continue(yes/no):");
   scanf("%c",&sel);//Issue 1:scanf() does not run in first time and control branch to ELSE part without taking input to "sel" variable, why? Please run the program to understand what I'm saying.
   fflush(stdin);//User input yes or no which is a string but we check only first letter then remaining letters stay left in STDIN so fflush(STDIN) used here.
   if(sel=='y'||sel=='Y')//in case of yes or Yes.
   {   getch();
       system("cls");
       goto start;
   }
   else if(sel=='n'||sel=='N')//in case of no or No.
   {
       getch();
       exit(0);
   }
   else//ISSUE 1 PART !:Control jump to here without checking if,why?
   {  printf("\nPlease Enter yes or no.");//in case letter other than y,Y,n or N.
      getch();
      system("cls");
      goto middle;
   }
getch();

}

