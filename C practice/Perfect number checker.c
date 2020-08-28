#include<stdio.h>
#include<conio.h>
void main(void)
{
 int num,factor,perfect=0;
 printf("Enter a number to check if it is perfect number or not:");
 scanf("%d",&num);
 for(factor=1;factor<num;factor++)
    if(num%factor==0)
       perfect+=factor;

    if(perfect==num)
       printf("%d is a Perfect number",num);


    else
        printf("%d is not a Perfect number",num);
    getch();

}
