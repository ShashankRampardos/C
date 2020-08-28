main()
{
    int num,num1;
    int sum=0;
    printf("Enter a number to calculate sum of its digit:");
    scanf("%d",&num);
    do
    {
        num1=num%10;
        sum+=num1;
        num/=10;
    }
    while(num!=0);
    printf("Sum of digits is %d",sum);
    getch();

}
