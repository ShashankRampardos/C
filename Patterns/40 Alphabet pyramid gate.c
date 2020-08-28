main()
{
    short int r;
    short int i,j;
    char alpha;
    printf("Enter number of rows");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {  alpha=65;
        for(j=1;j<=2*r-1;j++)
        {
            if(j<=r+1-i||j>=r-1+i){
                printf("%c",alpha);
                alpha++;
              if(alpha>90)
                    alpha=65;
            }
            else{
                printf(" ");
                alpha++;
             if(alpha>90)
                    alpha=65;
            }
        }
        printf("\n");
    }
     getch();
}
