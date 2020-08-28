main()
{
    short int r;
    short int i,j;
    char k=0;
    printf("Enter number of rows:");
    scanf("%hi",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=2*r-1;j++)
        {
            if(j>=r+1-i&&j<=r-1+i)
                {
                    if(j<=r)
                        k++;
                    if(j>r)
                        k--;
                    printf("%d",k);
                }
            else
                printf(" ");
        }
printf("\n");
    }

   getch();
}
