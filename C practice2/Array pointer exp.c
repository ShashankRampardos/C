main()
{
    float a[10];
    char i;
    float b[10];
//printf("%u",&a);
//printf("\n%u",(a+1));
for(i=0;i<3;i++)
   scanf("%f",a+i);

for(i=0;i<3;i++)
    *(b+i)=*(a+i);
printf("\na=");
for(i=0;i<3;i++)
printf(" %.2f",*(a+i));
printf("\nb=");
for(i=0;i<3;i++)
    printf(" %.2f",*(b+i));

     getch();
}
