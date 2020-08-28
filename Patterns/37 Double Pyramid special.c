main()
{
    short int r;
    short int i,j,k=0,k1;
    char n;
    printf("Enter number of rows:");
    scanf("%hi",&r);
    n=(r+1)/2;
    k1=n+1;
   for(i=1;i<=r;i++)
   {
       if(i>=n && i<=(n+r)/2)
            k++;
       else if(i>(n+r)/2 && i<=r)
        k--;
       if(i>=1&&i<=(1+n)/2)
        k1--;
       else if(i>(1+n)/2)
        k1++;
        //printf("%d %d\n",k,k1);
       for(j=1;j<=n;j++)
       {
           if(j<=k||j>=k1)
           printf("o");
           else if(i>=(1+n)/2+1&&i<=(n+r)/2-1&&j==(1+n)/2)
           printf("|");
           else
           printf(" ");
           //if(i>=4&&i<=6&&j==3)
            //printf("|");

       }
       printf("\n");
   }


     getch();
}
/*k=0;
k1=6;
if(i>=5&&i<=7) (i>=n && i<=(n+r)/2)
  k++;

else if(i>7 &&i<=9) (i>(n+r)/2 && i<=r)
   k--;




if(i>=1&&i<=3) (i>=1&&i<=(1+n)/2)
 k1--;

else if(i>3) (i>(1+n)/2)
k1++;



if(j<= k &&j>=k1)
------------------------------
n=(r+1)/2;
r=r
c=n;
INITILISE K=n+1;
*/
