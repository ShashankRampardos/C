main()
{
    short int r;
    short int i,j;
    char n;

    printf("Enter number of rows:");
    scanf("%hi",&r);

   for(i=1;i<=r;i++)
   {   n=0;
       for(j=1;j<=r;j++)
       {
           if(j<=i)
           {
               if(n==0)
                n=1;
               else
                n=0;
               printf("%hi",n);
           }
       }
       printf("\n");
   }
   getch();
}
