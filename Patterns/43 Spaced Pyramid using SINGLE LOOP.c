main()
{
    short int r;
    short int i;
    short int k,n,flag=1;
    printf("Enter number of rows:");
    scanf("%d",&r);

    for(i=1,k=0;i<=2*r-1;i++)
    {     if(i>=r-k&&i<=r+k)
          { n=i;
             if(i==n)
              if(flag)
               printf("*");
              else
               printf(" ");
        flag=1-flag;
        }
        else
            printf(" ");

        if(i==r+k)
       {   k++;
           printf("\n");
           if(i==2*r-1)
        break;
        flag=1;
           i=0;
       }
    }
     getch();
}
