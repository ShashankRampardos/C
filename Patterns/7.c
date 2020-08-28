main()
{
    short int r,c;
    short int i,j,k=1;

    //printf("Enter number of rows:");
    //scanf("%hi",&r);
    //printf("Enter number of Columns:");
    //scanf("%hi",&c);

    for(i=1;i<=5;i++)
       { printf(" ");

         for(j=1;j<=9;j++)
           {
            if(j>=6-i&&j<=4+i&&k)
           {
               printf("*");
               k=0;
           }

            else
             {printf(" ");
             k=1;}
           }

      printf("\n");
        }
}
