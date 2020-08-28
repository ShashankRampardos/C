main()
{
    short int n;
    char pn;
    printf("Enter a character:");
    scanf("%hi",&n);
    pn=n%10;
    printf("Last digit:%hi\n",pn);
    while(!(n>=1&&n<=9))
    {
        n/=10;
    }
    printf("First digit %d\n",n);
    printf("Sum of first and last digit:%hi",n+pn);
    getch();
}
