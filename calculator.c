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
   switch(opt)                          //the operation will be like
   {                                    //234  (first number)
   case '+':                            //*    (operator) 
    scanf("%d",&b);                     //89   (second number)
    printf("\n%d",a+b);                 //20826(result)
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
   printf("\nDo you want to continue(yes/no):");//below code to dont let program to stop itself but by user's command
   scanf("%c",&sel);
   fflush(stdin);
   if(sel=='y'||sel=='Y')//user will enter yes, Yes..or YES but we onlu check first letter whether it is Y or y.
   {   getch();
       system("cls");
       goto start;//if yes we jump to start of the program to Jump start tag name.
   }
   else if(sel=='n'||sel=='N')//same with no we check only first letter (N or n).
   {
       getch();
       exit(0);
   }
   else//in case user enter any other word other than yes or no, the we jump to middle Jump tag.
   {  printf("\nEnter yes or no.");//control directly jump to else part without meeting to if or else if, why?(this happen only once then program runs correctly)
      getch();                     //is it cause of flush() between scanf and if, but removing it also gives trouble. 
      system("cls");
      goto middle;
   }


}

