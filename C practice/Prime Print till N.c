main()
{
    int n,i,c=0,j,c1=0;
    printf("---------------------------------------------------------------------");
    printf("\n               Program to generate Prime number");
    printf("\n---------------------------------------------------------------------");
    printf("\nTell us how many number you want to generate:");
    scanf("%d",&n);
    for(j=2;c1<n;j++)
     {c=0;
      for(i=2;i<=j;i++)
       {
         if(j%i==0)
          {
            c++;
            if(c>1)
                { c=0;
                  break;}
          }
       }
if(c)
    {printf("%d ",j);
c1++;}     }

getch();
}

