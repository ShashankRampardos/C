#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    char hex[16],oct[20];
    char powe=0, sub,len;
    unsigned long long int dec=0;
    unsigned long long int dig=0;

    //for(sub=0;sub<16;sub++)
      //  hex[sub]=16;
    printf("Enter a Hexadecimal number:");
    scanf("%s",hex);
    for(len=0;hex[len]!=0;len++);
    for(sub=0;hex[sub]!=0;sub++)
    {  if(hex[sub]==48)
            hex[sub]=0;
       else if(hex[sub]==49)
            hex[sub]=1;
       else if (hex[sub]==50)
            hex[sub]=2;
       else if (hex[sub]==51)
            hex[sub]=3;
       else if (hex[sub]==52)
            hex[sub]=4;
       else if (hex[sub]==53)
            hex[sub]=5;
       else if(hex[sub]==54)
            hex[sub]=6;
       else if (hex[sub]==55)
            hex[sub]=7;
       else if (hex[sub]==56)
            hex[sub]=8;
       else if (hex[sub]==57)
            hex[sub]=9;
       else if(hex[sub]==65||hex[sub]==97)
            hex[sub]=10;
       else if(hex[sub]==66||hex[sub]==98)
            hex[sub]=11;
       else if(hex[sub]==67||hex[sub]==99)
            hex[sub]=12;
       else if(hex[sub]==68||hex[sub]==100)
            hex[sub]=13;
       else if(hex[sub]==69||hex[sub]==101)
            hex[sub]=14;
       else if(hex[sub]==70||hex[sub]==102)
            hex[sub]=15;
    }
    //for(sub=0;hex[sub]!=0;sub++)
     //   printf("%d ",hex[sub]);
    //printf("\n");
    for(sub=len-1;sub>=0;sub--)
    {
        dig=hex[sub]*pow(16,powe);
        dec+=dig;
        powe++;
    }
        //printf("In Decimal %llu",dec);

//DEC TO OCT
for(sub=0;sub<20;sub++)
oct[sub]=0;

for(sub=0;dec!=0;sub++)
{
    oct[sub]=dec%8;
    dec=dec/8;
}
printf("In Octal: ");
for(len=0;oct[len]!=0;len++);
for(sub=0,powe=len-1;sub<len/2;sub++,powe--)
{
    oct[sub]=oct[sub]+oct[powe];
    oct[powe]=oct[sub]-oct[powe];
    oct[sub]=oct[sub]-oct[powe];
}
powe=len%3;
len=0;
for(sub=0;oct[sub]!=0;sub++)
{
    if(powe==1)
    {
    printf("%d",oct[sub]);
    printf(" ");
    sub++;
    powe=0;
    }
    if(powe==2)
    {
        printf("%d",oct[sub]);
        sub++;
        printf("%d",oct[sub]);
        printf(" ");
        sub++;
        powe=0;
    }
    printf("%d",oct[sub]);
    len++;
    if(len%3==0)
    {
        printf(" ");
    }

}


       getch();

}
