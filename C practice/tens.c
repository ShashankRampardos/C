#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int oct,oct_cpy;
    int z=1;
    char helper=0;
    int dec=0;
    printf("Enter a Octal number");
    scanf("%d",&oct);
    oct_cpy=oct;
    while(oct_cpy!=0)
        {
            z*=10;
            oct_cpy/=10;
        }
        z/=10;

    printf("%d",z);

       getch();

}
