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
    printf("One's complement=%s\n",b);
    for(i=0;b[i]!='\0';i++);
l=i;
printf("%d",l);
    getch();

}
