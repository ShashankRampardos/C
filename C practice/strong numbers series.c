main()
{
    int n,pn,i,st=0,d,upper,df;
    printf("Enter Upper limit to display strong numbers");
    scanf("%d",&upper);
    printf("Strong numbers between 1 to %d are ",upper);
    for(n=1;n<=upper;n++)
    {
        st=0;
        pn=n;
    while(n!=0)
    {   df=1;
        d=n%10;
        for(i=1;i<=d;i++)
            df*=i;
        st+=df;
        n/=10;
    }n=pn;
    if(pn==st)
        printf("%d ",st);


    }
}
