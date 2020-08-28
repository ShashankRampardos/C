main()
{
 int n,c=1;
 printf("Enter a number:");
 scanf("%d",&n);
 if(n==0)
    c=0;

 while(n!=0)
 {
     n/=10;
     if(n!=0)
        c++;
 }
 printf("It is a %d digit number\n",c);
 n=c;
 if(n!=0)
 c=1;
 while(n>1)
 {
     c*=10;
     n--;
 }
 printf("Quantity:");
switch(c)
{
case 1000000000:printf("Billions");
break;
case 100000000:printf("Hundred Millions");
break;
case 10000000:printf("Ten Millions");
break;
case 1000000:printf("Millions");
break;
case 100000:printf("Hundred Thousands");
break;
case 10000:printf("Ten Thousands");
break;
case 1000:printf("Thousands");
break;
case 100:printf("Hundreds");
break;
case 10:printf("Tens");
break;
case 1:printf("Ones");
break;
case 0:printf("Zero");
break;
default:printf("Too Much");
}
getch();
}
