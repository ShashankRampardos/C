void main(void)
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

if(a>b)
    if(a>c)
        if(a>d)
            printf("g %d",a);
        else
            printf("g %d",d);
    else
        if(c>b)
           if(c>d)
             printf("g %d",c);
           else
             printf("g %d",d);
         else
           if(b>d)
              printf("g %d",b);
           else
              printf("g %d",d);

else
     if(b>c)
        if(b>d)
           printf("g %d",b);
        else
           printf("%d",d);
     else
        if(c>d)
           printf("g %d",d);
        else
           printf("g %d",d);

printf("\n%d is greater",(a>b)?(a>c?a>d?a:d:c>d?c:d):(b>c?b>d?b:d:c>d?c:d));

   printf("\nGreater = %d",a>b&&a>c&&a>d?a:b>c&&b>d?b:c>d?c:d);
getch();
}
