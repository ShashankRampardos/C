main()
{
    int i=11,x,pnum;
    int rev=0,str;
    int c=0;
    printf("Enter a enter how many palindrome you want to display:");
    scanf("%d",&str);
    i=11;
  while(c<str)
{
        rev=0;

        pnum=i;
       do
    {
        x=i%10;
        rev=rev*10+x;
        i/=10;
    }
       while(i!=0);
if(rev==pnum)
    {printf("%d  ",rev);
    c++;}
    i=pnum;
    i=i+2;

}

    getch();

}
