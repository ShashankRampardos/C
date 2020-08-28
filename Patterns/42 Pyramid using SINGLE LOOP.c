main()
{
    short int r;
    short int i,j;
    short int k,n,n1;
    printf("Enter number of rows:");
    scanf("%d",&r);

    for(i=1,k=0;i<=2*r-1;i++)
    {  if(i>=r-k&&i<=r+k)
        { n=i;

          if(i==n)
            printf("*");
        }
        else
            printf(" ");

        if(i==r+k)
       {   k++;
           printf("\n");
           if(i==2*r-1)
        break;

           i=0;

       }

}
     getch();
}
