#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    char sub,len=0;
    int dec,cpydec;
    char bin[32];
    printf("Enter a number in Decimal number system:");
    scanf("%d",&dec);
  for(sub=0;sub<32;sub++)
        bin[sub]=0;

  cpydec=dec;
  for(sub=0;dec;sub++)
  {
      if(dec%2==0)
        bin[sub]='0';
      else
        bin[sub]='1';
      dec/=2;
  }
  for(len=0;bin[len]!=0;len++);
  for(sub=0,dec=len-1;sub<len/2;sub++,dec--)
  {
      bin[sub]=bin[sub]+bin[dec];
      bin[dec]=bin[sub]-bin[dec];
      bin[sub]=bin[sub]-bin[dec];
  }

dec=0;
  printf("%d in Binary:",cpydec);
  for(sub=0;bin[sub]!=0;sub++)
  {
      printf("%c",bin[sub]);
      dec++;
      if(dec%4==0)
        printf(" ");
  }


       getch();

}
