main()
{
    short int r;
    short int i,j;
    char a,cpy_a=64;

    printf("Enter number of rows:");
    scanf("%hi",&r);

     for(i=1;i<=r;i++)
     {
        cpy_a>='Z'?cpy_a='A':cpy_a++;
         a=cpy_a;
         for(j=1;j<=r;j++)
         {
             if(j<=i)
             {
               printf("%c",a);
             a<='A'?a='Z':a--;
             }
             else
                printf(" ");
         }
         printf("\n");
     }
   getch();
}
