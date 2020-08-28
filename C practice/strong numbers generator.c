main()
{
    int c=0,n,pn,i,st=0,d,count,df;
    printf("Enter how many numbers you want to display(only under 5)");
    scanf("%d",&count);
    for(n=1;c<count;n++)
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
        {
            printf("%d ",st);
            c++;
        }
    }
}
