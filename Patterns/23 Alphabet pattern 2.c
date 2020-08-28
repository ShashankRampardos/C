main()
{
    short int r;
    short int i,j;
    char alp=64;

    printf("Enter number of rows:");
    scanf("%hi",&r);
   for(i=1;i<=r;i++)
    {
       for(j=1;j<=2*r-1;j++)
        {
            if(j>=(r+1)-i&&j<=(r-1)+i){
            j<=r?alp++:alp--;
            printf("%c",alp);
            }
            else
            printf(" ");


        }
printf("\n");
    }

   getch();
}
