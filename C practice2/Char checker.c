main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a>=97&&a<=97+25||a>=65&&a<=65+25)
    {printf("Alphabet");

    }
    else if(a>='1'&&a<='1'+8)
        printf("Number");
    else
        printf("other character");
}
