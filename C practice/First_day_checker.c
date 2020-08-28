void main(void)
    {
register int a=2;
register int d;
int year,diff;
int c=0;
int i;

printf("Enter a year in numbers:");
scanf("%d",&year);
diff=year-2000;

if(diff>0)
{


  for(i=1;i<=diff;a++,i++)
  {
      d=a;
      c++;
      if(c==4)
      { if(a==7)
      {
          a=0;
      }
          a++;
          c=0;

      }
      if(a>=7)
        a=0;
  }
  //printf("%d",d);
}
else
    {a=6;
        for(i=-1;i>=diff;a--,i--)
{
    d=a;
    c++;
    if(c==4)
    {
        if(a==1)
            a=8;
        a--;
        c=0;
    }
    if(a==1)
        a=8;

}
//printf("%d",d);

}

if(d==1)
    printf("Sunday");
else if(d==2)
    printf("Monday");
else if(d==3)
    printf("Tuesday");
else if(d==4)
    printf("Wednesday");
else if(d==5)
    printf("Thursday");
else if(d==6)
    printf("Friday");
else if (d==7)
    printf("Saturday");
getch();
}
