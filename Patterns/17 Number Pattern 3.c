main()
{
    short int r;
    short int i,j;
    short int k,cpy_k;
    printf("Enter number of rows:");
    scanf("%hi",&r);
    k=r;
    cpy_k=k;
    for(i=1;i<=r;i++)
    { cpy_k--;
    k=cpy_k;
        for(j=1;j<=r;j++)
        {
            if(j<=r+1-i)
                {
                    printf(" %d",k);
                    k--;
                }
            else
                printf(" ");
        }
printf("\n");
    }

   getch();
}
