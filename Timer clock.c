//Program for timer clock
//NOTE: 1.Audio enabled program use audio device
//      2.Written in Code::Blocks IDE
#include<stdio.h>
#include<windows.h>
#include<process.h>

void main()
{
    register int s;
    int h,m;
    int th,tm,ts;
    int a,b=0,w;
    keep:
        h=0;
        m=0;
        system("cls");
        b=0;
    printf("Enter Timing for Timmer\n");
    printf("Hour:");
    scanf("%d",&th);
    printf("\nMinute:");
    scanf("%d",&tm);
    printf("\nSecond:");
    scanf("%d",&ts);
    printf("Set time for Alert Tune\n");
printf("   Second\r");
scanf("%d",&a);


    while(1)
       {

        while(1)
        {
            h=(m==60)?(h+=1):h;//Question: h value not increment if I write h++ instead of h+=1,why?
            m=(m==60)?(m=0):m;
          for(s=0;s<=60;s++)
            {
             Sleep(1000);
             system("cls");
             printf("Hour|Minute|Second\n");
             printf("%d    %d      %d\n",h,m,s);
             m=(s==60)?(m+=1):m;//Question: m value not increment if I write m++ instead of h+=1,why?
             if(th==h&&tm==m&&ts==s)
            {goto tune;
             }
           }
        }
       }

    tune:
a/=2;
      while(b!=a)
    {Beep(200,500);
    Beep(250,500);
    Beep(150,500);
    Beep(210,500);
    b+=1;}
    back:

    printf("\n\aDo you want to continue or exit\n");
    printf("Continue (press 1)\n");
    printf("Exit (press 0)\n");
    scanf("%d",&w);
    if(w==1)
        goto keep;
    else if (w==0)
        exit(0);
    else
    {system("cls");
        printf("\nEnter 0 or 1");

        goto back;
    }
    getch();
}
