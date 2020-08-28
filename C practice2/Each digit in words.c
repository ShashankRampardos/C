#include<stdio.h>
main()
{
    int firstn,z=1;
    int n;
start:
    printf("Enter a number to display each digit in words:");
    scanf("%d",&n);
    firstn=n;
    while(firstn!=0)
    {
        z*=10;
        firstn/=10;
    }
    z/=10;
    while(z>=1)
    {
        firstn=n/z;
        firstn%=10;
        switch(firstn)
        {
            case 1:printf("One ");
            break;
            case 2:printf("Two ");
            break;
            case 3:printf("Three ");
            break;
            case 4:printf("Four ");
            break;
            case 5:printf("Five ");
            break;
            case 6:printf("Six ");
            break;
            case 7:printf("Seven ");
            break;
            case 8:printf("Eight ");
            break;
            case 9:printf("Nine ");
            break;
            default:printf("Enter only a numbers:");
            goto start;
        }
           z/=10;
    }
getch();

}
