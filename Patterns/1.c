main()
{
    short int r,c;
    short int i,j;

    printf("Enter number of rows:");
    scanf("%hi",&r);
    printf("Enter number of Columns:");
    scanf("%hi",&c);

    for(i=0;i<r;i++)
      {
          for(j=0;j<c;j++)
          {
              printf("&");

          }
          printf("\n");
      }
      getch();
}
