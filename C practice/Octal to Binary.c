#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int des=0,oct;
    int octcpy;
    char dig,p=0;
    int desdig;
    char bin[32];
//OCTAL TO DECIMAL CONVERSION
start:
    printf("Enter a Octal number:");
    scanf("%d",&oct);
    octcpy=oct;
    while(octcpy!=0)
    {
        dig=octcpy%10;
        if(dig>7)
        {
            printf("Not a octal number:");
            getch();
            system("cls");
            goto start;
        }
    octcpy/=10;
    }
    octcpy=oct;
    while(oct!=0)
    {
        dig=oct%10;
        desdig=dig*pow(8,p);
        des+=desdig;
        p++;
        oct/=10;
    }
    for(p=0;p<32;p++)
    {
        bin[p]=0;
    }
   // printf("%d in Decimal is %d",octcpy,des);

//DECIMAL TO BINARY CONVERSION START
printf("Decimal=%d\n",des);
for(p=0;des!=0;p++)
{
    if(des%2==0)
        bin[p]='0';
    else
        bin[p]='1';
    des/=2;
}
//for(p=0;bin[p]!=0;p++);
//for(p=0;p<32;p++)
//{
 //   printf("%d ",bin[p]);
//}
//printf("\n");
/*for(dig=0;dig<p/2;dig++,p--)
{
    bin[dig]=bin[dig]+bin[p];
    bin[p]=bin[dig]-bin[p];
    bin[dig]=bin[dig]-bin[p];
}*/

strrev(bin);
printf("%d in Binary:",octcpy);
dig=0;
for(p=0;bin[p]!=0;p++)
{
    printf("%c",bin[p]);
    dig++;
    if(dig%4==0)
        printf(" ");

}
       getch();

}
