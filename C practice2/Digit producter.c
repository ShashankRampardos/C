main()
{
    int num,num1;
    int rev=0;
    printf("Enter a number to calculate sum of its digit:");
    scanf("%d",&num);
    do
    {
        num1=num%10;
        rev=rev*10+num1;
        num/=10;
    }
    while(num!=0);
    printf("Product of digit is %d",rev);
    getch();

}
