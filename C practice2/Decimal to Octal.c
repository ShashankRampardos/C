#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    char sub,len=0;
    int dec,cpydec;
    char oct[32];
    printf("Enter a number in Decimal number system:");
    scanf("%d",&dec);
  for(sub=0;sub<32;sub++)
        oct[sub]=9;

  cpydec=dec;
  for(sub=0;dec;sub++)
  {oct[sub]=dec%8;
  dec/=8;
  }
for(len=0;oct[len]!=9;len++);
  for(sub=0,dec=len-1;sub<len/2;sub++,dec--)
  {
      oct[sub]=oct[sub]+oct[dec];
      oct[dec]=oct[sub]-oct[dec];
      oct[sub]=oct[sub]-oct[dec];
  }
dec=0;
  printf("%d in Octal:",cpydec);
  cpydec=len%3;
  for(sub=0;oct[sub]!=9;sub++)
  {
      if(cpydec==1)
      {
          printf("%d",oct[sub]);
          sub++;
          printf(" ");
          cpydec=0;
      }
      if(cpydec==2)
      {
          printf("%d",oct[sub]);
          sub++;
          printf("%d",oct[sub]);
          printf(" ");
          sub++;
          cpydec=0;
      }

      printf("%d",oct[sub]);
      dec++;
      if(dec%3==0)
       printf(" ");
  }


       getch();

}
/*
*/
/*  for(len=0;oct[sub]!=9;len++);
  for(sub=0,dec=len-1;sub<len/2;sub++,dec--)
  {
      oct[sub]=oct[sub]+oct[dec];
      oct[dec]=oct[sub]-oct[dec];
      oct[sub]=oct[sub]-oct[dec];
  }*/
