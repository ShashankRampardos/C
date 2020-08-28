main()
{
    short int r;
    short int i,j,k;
    printf("Enter number of rows:");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    { k=0;
        for(j=1;j<=r;j++)
        {
            if(j<=i){
             printf(" %d",k);
            k=k+i-1;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

     getch();
}
