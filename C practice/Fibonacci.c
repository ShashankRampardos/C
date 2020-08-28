main()
{
    int a=0,b=1,c=1;
    int n,i=1;
    printf("Enter nth number:");
    scanf("%d",&n);
    printf("%d ",a);
    while(i<=n)
    {
        printf("%d ",c);
        c=a+b;
        a=b;
        b=c;

i++;    }


    getch();

}
