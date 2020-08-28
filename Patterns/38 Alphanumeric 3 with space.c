main()
{
    short int r;
    short int i,j;
    char n,c;

    printf("Enter number of rows");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {  n=1;c=65;
        for(j=1;j<=2*r-1;j++)
        {
            if(j>=r+1-i&&j<=r-1+i){
              if(i%2==1){
                if(j%2==0){
                  if(n>9)
                    n=1;
                printf("%d",n);
                n++;
                }
                else
                printf(" ");
              }
              else{
                if(j%2==1){
                  if(c>90)
                    c=65;
                printf("%c",c);
                c++;
                }
                else
                    printf(" ");
              }

            }
            else
                printf(" ");

        }
        printf("\n");
    }
     getch();
}
