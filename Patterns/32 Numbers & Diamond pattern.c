main()
{
    short int r;
    short int i,j,k;
    char n=-1,m;

    printf("Enter number of rows:");
    scanf("%hi",&r);

m=(r+1)/2;
   for(i=1;i<=r;i++)
   {  if(r%2==0)
      {
          if(i<=m)
            k++;
          if(i>m+1)
            k--;
      }
      else
      i<=m?k++:k--;
       for(j=1;j<=r;j++)
       {
          if(j>=m+1-k&&j<=m-1+k)
           {
              if(j<=m)
              { n++;
                  if(n>9){
                    n=0;
                  printf("%d",n);
                  }
                  else
                    printf("%d",n);
              }
              else
              { n--;
                if(n<0){
                    n=9;
                    printf("%d",n);
                }
                else
                    printf("%d",n);
              }
           }
           else
            printf(" ");

       }
       printf("\n");
   }

   getch();
}
