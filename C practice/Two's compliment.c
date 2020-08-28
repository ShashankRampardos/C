main()
{
    char b[32];
    int i;
    char l;
    printf("Enter binary number:");
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]=='0')
            b[i]='1';
        else
            b[i]='0';
    }

    for(i=0;b[i]!='\0';i++);
l=i-1;

     for(i=l;i>=0;i--)
     {
         if(b[i]=='1')
         {
             b[i]='0';
         }
         if(b[i-1]=='0')
         {
             b[i-1]='1';
             break;
         }
     }
printf("Two's complement=%s\n",b);
    getch();

}
