main()
{
    int n,pn,i,st=0,d,df=1;
    printf("Enter a number to check strong number");
    scanf("%d",&n);
    pn=n;
    while(n!=0)
    {   df=1;
        d=n%10;
        for(i=1;i<=d;i++)
            df*=i;
        st+=df;
        n/=10;
        printf("%d\n",df);
    }
    if(pn==st)
        printf("%d is a strong number",pn);
    else
        printf("%d is not a strong number",pn);


getch();
}
