main()
{
    char a[10];
    char i,j;
    char l,t;

printf("Enter a string:");
scanf("%s",a);
for(l=0;a[l]!=0;l++);

    for(i=0,j=l-1;i<l/2;i++,j--)
   {   a[i]=a[i]+a[j];
         a[j]=a[i]-a[j];
         a[i]=a[i]-a[j];
             }
    for(i=0;i<l;i++)
    printf("%c ",a[i]);


       //t=a[i];
       //a[i]=a[j];
       //a[j]=t;




    getch();

}
