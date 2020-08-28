main()
{
    short int r,c;
    char i,j,k=0,n;;
    printf("Enter odd number of rows:");
    scanf("%hi",&r);
   n=(r+1)/2;
      for(i=1;i<=r;i++)
      { printf(" ");
      if(r%2==0)
      {
          if(i<=n)
            k++;
          if(i>n+1)
            k--;
      }
      else
      i<=n?k++:k--;
          for(j=1;j<=(r+1)/2;j++)
            if(j>=1&&j<=k)
            {
                printf("o");}
            else{
                printf(" ");}

            printf("\n");

      }

   getch();
}
