main()
{
    short int r;
    short int i,j;
    char n;

    printf("Enter number of rows:");
    scanf("%hi",&r);

   for(i=1;i<=r;i++)
   {
       for(j=1;j<=r;j++)
       {
           if(i==1||i==r||j==1||j==r)
            printf("o");
           else
            printf(" ");


       }
       printf("\n");
   }

   getch();
}
