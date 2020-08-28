main()
{
    short int r;
    short int i,j;

    printf("Enter number of rows");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(j==i||j==r+1-i)
                printf("O");
            else
                printf(" ");
        }
        printf("\n");
    }
     getch();
}
