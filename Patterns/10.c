main()
{
    short int r,c;
    short int i,j,k=1;

    //printf("Enter number of rows:");
    //scanf("%hi",&r);
    //printf("Enter number of Columns:");
    //scanf("%hi",&c);

    for(i=1;i<=4;i++)
       { printf(" ");
         k=1;
         for(j=1;j<=7;j++)
           {
            if(j>=5-i&&j<=3+i)
              {
                  printf("%d",k);
                  (j<4)?k++:k--;


              }
            else
             printf(" ");

           }

      printf("\n");
        }
getch();
}
