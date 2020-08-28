#include<windows.h>
#include<stdio.h>
#include<conio.h>
 void main()
    {
        int a=3;
        int i=3;
        while(i){
        //scanf("%c",&a);
        //getch();

 switch(getch()){
case 97:
Beep(261.53,400);
break;
case 115:
Beep(293.66,400);
break;
case 100:
Beep(329.63,400);
break;
case 102:
Beep(349.23,400);
break;
case 103:
Beep(392.00,400);
break;
case 104:
Beep(440.00,400);
break;
case 106:
Beep(493.88,400);
break;
case 107:
Beep(523.25,400);
break;
default:printf("Use (a,s,d,f,g,h,j,k,) keys only");
    break;
 }i--;
 system("cls");
 //printf("%c",13);

 }
 //getch();
    }
