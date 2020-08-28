main()
{
    short int r;
    short int i,j;

    printf("Enter number of rows:");
    scanf("%hi",&r);
   for(i=1;i<=r;i++)
    {
       for(j=1;j<=2*r-1;j++)
        {
            if(j>=i&&j<=2*r-i)
            printf(" ");
            else
            printf(".");


        }
printf("\n");
    }

   getch();
}
