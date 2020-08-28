main()
{
   short int i;

   for(i=32;i<=255;i++)
   {
       printf("Decimal \tHexadecimal\tOctal \tSymbols\n");
       printf("   %d   \t    %x     \t %o  \t   %c   \n",i,i,i,i);

   }

    getch();

}
