main()
{
    short int r;
    short int i,j;
    char alp=64,n=0;

    printf("Enter number of rows:");
    scanf("%hi",&r);
   for(i=1;i<=r;i++)
    {  alp=64;
       n=0;
       for(j=1;j<=2*r;j++)
        {
            if(j>=(r+1)-i&&j<=r+i){
            if(j<=r){
            alp++;
            printf("%c",alp);
            }
            else{
            n++;
            printf("%hi",n);
            }

            }
            else
            printf(" ");


        }
printf("\n");
    }

   getch();
}
