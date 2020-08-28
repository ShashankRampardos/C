#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int des=0,oct;
    int octcpy;
    char dig,p=0;
    int desdig;
    char hex[32];
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
        hex[p]=0;
    }

//printf("%d in Decimal=%d",octcpy,des);
for(p=0;des!=0;p++)
{
    hex[p]=des%16;
    des/=16;
}
strrev(hex);
dig=0;
for(p=0;hex[p]!=0;p++)
{
    if(hex[p]<10)
    printf("%d",hex[p]);
    else if(hex[p]==10)
    printf("A");
    else if(hex[p]==11)
        printf("B");
    else if(hex[p]==12)
        printf("C");
    else if(hex[p]==13)
        printf("D");
    else if(hex[p]==14)
        printf("E");
    else if(hex[p]==15)
        printf("F");
    dig++;
    if(dig%4==0)
        printf(" ");

}
       getch();

}
