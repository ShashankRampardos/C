main()
{
    int n,x,n1,y,y1,y3;
    int c=1,z=1;
    printf("Enter a number:");
    scanf("%d",&n);
    x=n%10;
    n1=n;
    while(n1!=0)
    {
        x*=10;
        n1/=10;
    }
    x/=100;
    y=n/10;
    if(n==0)
        c=0;
    n=y;
   // printf("y=%d\n",y);
    while(n!=0)
    {
        n/=10;
    if(n!=0)
        c++;
    }
    //printf("%d\n",c);
    while(c>1)
    {
        z*=10;
        c--;
    }
    //printf("%d\n",z);
    //printf("y=%d\n",y);
  y1=y;
  y/=z;
  //printf("y=%d\n",y);
  y1%=z;
  //printf("y1=%d\n",y1);
  x+=y1;
  x*=10;
  x+=y;
  printf("LAST NUMBER TO FIRST AND FIRST NUMBER TO LAST\n");
  printf("Modifier number:%d",x);



   getch();
}
