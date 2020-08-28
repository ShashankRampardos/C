main()
{
    short int i,j,k=0,l=0;
    char flag;

     for(i=1;i<=5;i++)
     {  flag=1;
     if(i%2==1)
        l=k+1;
     else
       l=k+i;
        for(j=1;j<=9;j++)
        {
            if(j<=2*i-1){
             if(flag==1){
             printf("%d",i%2==0?l--:l++);
             i%2==0?++k:++k;
             }
            else
             printf("*");
             flag=1-flag;
            }
            else
            printf(" ");
        }
         printf("\n");
              }
   getch();
}
