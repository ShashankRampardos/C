#include<stdio.h>
main()
{int n;
short int i=2;
printf("Enter number to find factors of:");
scanf("%d",&n);
printf("Factors of %d are 1 ",n);
while(i<=n)
{
    if(n%i==0)
        printf("%d ",i);
    i++;
}

getch();

}
