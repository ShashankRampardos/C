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
           if((i==1||i==r||j==1||j==r)||((i>=3&&i<=r-2)&&(j>=3&&j<=r-2))){
           printf("o");

           }

           else
            printf(" ");


       }
       printf("\n");
   }

   getch();
}
