main()
{
    char b[32];
    char o[11];
    char i,j=0;
    char l,c=0,ol=0;
    char helper=1;
    o[0]=0;
    j=0;
    for(i=0;i<11;i++)
    o[i]=0;



    printf("Enter a Binary number:");
    scanf("%s",b);
    for(l=0;b[l]!='\0';l++);
    for(i=l-1;i>=0;i--)
    {

     if(b[i]=='1')
        {
            o[j]+=helper;
        }
        helper*=2;
    c++;
      if(c%3==0)
      {j++;
      helper=1;
      }
    }
    strrev(o);
     printf("%s in Octal number system:",b);
     for(i=0;o[i]!=0;i++)
    {
        printf("%d",o[i]);
    }

    getch();

}
