main()
{
    short int r;
    short int i,j;
    short int k;
    short int c;
    char n;
    printf("Enter number of rows:");
    scanf("%hi",&r);
c=r%2==0?r/2:(r+1)/2;
k=c+1;
   for(i=1;i<=r;i++)
    { if(r%2==0)
       {
           if(i<=c)
            k--;
           if(i>c+1)
            k++;
       }
       else
        i<=c?k--:k++;
        n=1;
       for(j=1;j<=c;j++)
        {
            if(j>=k)
                {
                    printf("%d",n);
                    n++;
                }
            else
                printf(" ");
        }
printf("\n");
    }

   getch();
}
