#include<stdio.h>
main()
{
    int i,n;
    printf("Enter a number to find Prime factors of:");
    scanf("%d",&n);
    printf("prime factors of %d= ",n);
    for(i=2;n>1;)
    {
        if(n%i==0)
        {
            n=n/i;
            printf("%d ",i);

        }
        else
            i++;

    }
getch();

}
