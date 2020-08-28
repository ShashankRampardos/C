#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int des=0,oct;
    int octcpy;
    char dig,p=0;
    int desdig;
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


printf("%d in Decimal=%d",octcpy,des);

       getch();

}
