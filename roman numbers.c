#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<process.h>
void main(void)
{
    int n,wn;
    char sel;
start:
    printf("Enter a number to convert it into roman number:");
    scanf("%d",&n);
    printf("IN ROMAN NUMBER SYSTEM: ");
    if(n>=10000&&n<=99999)                  //10000==XM==1
                                            //20000==XXM==2
    {                                       //30000==XXXM==3
        wn=n/10000;                         //40000==XLM==4
        wn*=10000;
        n%=10000;                           //50000==LM==5
        if(wn==10000)                       //60000==LXM==6
            printf("XM");
        if(wn==20000)                       //70000==LXXM==7
            printf("XXM");                  //80000==LXXXM==8
        if(wn==30000)                       //90000==XCM==9
             printf("XXXM");
        if(wn==40000)
                printf("XLM");
        if(wn==50000)
            printf("LM");
        if(wn==60000)
            printf("LXM");
        if(wn==70000)
            printf("LXXM");
        if(wn==80000)
            printf("LXXXM");
        if(wn==90000)
            printf("XCM");
    }

    if(n>=1000&&n<=9999)
    {
        wn=n/1000;
        wn*=1000;
        n%=1000;
        if(wn==1000)
            printf("M");
        if(wn==2000)
            printf("MM");
        if(wn==3000)
            printf("MMM");
        if(wn==4000)
            printf("MV");
        if(wn==5000)
            printf("V");
        if(wn==6000)
            printf("VM");
        if(wn==7000)
            printf("VMM");
        if(wn==8000)
            printf("VMMM");
        if(wn==9000)
            printf("MX");
    }
    if(n>=100&&n<=999)
    {
        wn=n/100;
        wn*=100;
        n%=100;
       if(wn==100)
            printf("C");
        if(wn==200)
            printf("CC");
        if(wn==300)
            printf("CCC");
        if(wn==400)
            printf("CD");
        if(wn==500)
            printf("D");
        if(wn==600)
            printf("DC");
        if(wn==700)
            printf("DCC");
        if(wn==800)
            printf("DCCC");
        if(wn==900)
            printf("CM");
    }
    if(n>=10&&n<=99)
    {
        wn=n/10;
        wn*=10;
        n%=10;
       if(wn==10)
            printf("X");
        if(wn==20)
            printf("XX");
        if(wn==30)
            printf("XXX");
        if(wn==40)
            printf("XL");
        if(wn==50)
            printf("L");
        if(wn==60)
            printf("LX");
        if(wn==70)
            printf("LXX");
        if(wn==80)
            printf("LXXX");
        if(wn==90)
            printf("XC");

    }
    if(n>1&&n<=9)
    {

       if(n==1)
            printf("I");
        if(n==2)
            printf("II");
        if(n==3)
            printf("III");
        if(n==4)
            printf("IV");
        if(n==5)
            printf("V");
        if(wn==6)
            printf("VI");
        if(wn==7)
            printf("VII");
        if(wn==8)
            printf("VIII");
        if(wn==9)
            printf("IX");
    }

if(n==0)
    printf("\n0 NOT EXIST ROMAN NUMBER PERIOD");
bottom:
printf("\nDo you want to continue(1/0):");
scanf("%d",&sel);
if(sel==1)
{   getch();
    system("cls");
    goto start;
}
else if(sel==0)
{   printf("THANK YOU FOR USING");
    getch();
    exit(0);
}
else
{   printf("Enter 1 or 0");
    getch();
    system("cls");
    goto bottom;
}


getch();

}
