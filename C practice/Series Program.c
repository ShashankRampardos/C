main()
{
    short int r;
    char i,j;
    int sum=0,k;
    printf("Enter Nth number:");
    scanf("%d",&r);
    printf("Series:");
    for(i=1;i<=r;i++)
    { k=0;
        for(j=1;j<=r;j++)
        {
           if(j<=i)
            k+=j;
           else
            continue;
        }
        printf(" %d",k);
        sum=sum+k;
    }
    printf("\nSum of series:%d",sum);

     getch();
}
