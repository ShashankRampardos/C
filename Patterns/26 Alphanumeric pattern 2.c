main()
{
    short int r;
    short int i,j;
    char n,alph;

    printf("Enter number of rows:");
    scanf("%hi",&r);
   for(i=1;i<=r;i++)
    {   n=0;alph=64;
        for(j=1;j<=2*r-1;j++)
        {
            if(j>=(r+1)-i&&j<=r-1+i)
               {
                   if(j<=r){
                    n++;
                   printf("%d",n);
                   }
                   if(j>r)
                   {
                       alph++;
                       printf("%c",alph);
                   }
               }
            else
            printf(" ");


            }

printf("\n");
    }

   getch();
}
