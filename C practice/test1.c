main()
{
    int a=0,digit,n=153,c=3;
   while(n!=0)
   {
       digit=n%10;
       a=a+pow(digit,3);
       n/=10;
   }
   printf("%d",a);
getch();

}
