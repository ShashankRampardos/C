main()
{
    short int r;
    short int i,j;
    short int k=1,n;
    printf("Enter number of rows:");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {  n=k;
        for(j=1;j<=i;j++)
        {
            printf(" %d",n);
            n=n-((r-i)+j);
        }
        k=k+(r+1)-i;
        printf("\n");
    }
     getch();
}
