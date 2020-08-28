#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    char sub,len=0;
    int dec,cpydec;
    char hex[32];
    printf("Enter a number in Decimal number system:");
    scanf("%d",&dec);
  for(sub=0;sub<32;sub++)
        hex[sub]=16;

  cpydec=dec;
  for(sub=0;dec;sub++)
  {hex[sub]=dec%16;
  dec/=16;
  }
for(len=0;hex[len]!=16;len++);
  for(sub=0,dec=len-1;sub<len/2;sub++,dec--)
  {
      hex[sub]=hex[sub]+hex[dec];
      hex[dec]=hex[sub]-hex[dec];
      hex[sub]=hex[sub]-hex[dec];
  }
dec=0;
  printf("%d in Hexadecimal:",cpydec);
  for(sub=0;hex[sub]!=16;sub++)
  {  if(hex[sub]<10)
      printf("%d",hex[sub]);
     if(hex[sub]==10)
        printf("A");
     if(hex[sub]==11)
        printf("B");
     if(hex[sub]==12)
        printf("C");
     if(hex[sub]==13)
        printf("D");
     if(hex[sub]==14)
        printf("E");
     if(hex[sub]==15)
        printf("F");
      dec++;
      if(dec%4==0)
       printf(" ");
  }


       getch();

}
/*
*/
/*  for(len=0;hex[sub]!=0;len++);
  for(sub=0,dec=len-1;sub<len/2;sub++,dec--)
  {
      hex[sub]=hex[sub]+hex[dec];
      hex[dec]=hex[sub]-hex[dec];
      hex[sub]=hex[sub]-hex[dec];
  }*/
