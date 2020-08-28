main()
{
    short int r;
    short int i,j;
    char k,l=1;

    printf("Enter number of rows:");
    scanf("%hi",&r);

     for(i=1;i<=r;i++)
     {  if(l>=10)
          l=1;
         k=l;

        for(j=1;j<=2*r-1;j++)
        {
            if(j<=r-1+i&&j>=r+1-i){
                   if(k>=10)
                    k=1;
                    if(k<=-1)
                        k=9;
                printf("%d",j<r?k--:k++);
            }
            else
                printf(" ");
        }
         printf("\n");
         l++;
     }
   getch();
}
