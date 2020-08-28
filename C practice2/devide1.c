main()
{
    int n,i,c=0;
    printf("---------------------------------------------------------------------");
    printf("\n               Program to check Prime number");
    printf("\n---------------------------------------------------------------------");
    printf("\nEnter a number to check whether it is prime or not");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            if(c>1)
                { c=0;
                  break;}
        }
    }
if(c)
    printf("%d is prime",n);
else
    printf("%d is not prime",n);
getch();
}

