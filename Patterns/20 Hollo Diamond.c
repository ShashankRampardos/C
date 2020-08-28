#include<stdio.h>
#include<conio.h>

main()
{
    short int r;
    short int i,j,k=0,n;

    printf("Enter number of rows:");
    scanf("%hi",&r);
n=(r+1)/2;
   for(i=1;i<=r;i++)
    { if(r%2==0)
    {
        if(i<=n)
            k++;
        if(i>n+1)
            k--;
    }
    else
    i<=n?k++:k--;
    //if(i==1&&i==r)
       // continue;
       for(j=1;j<=r;j++)
        {
            if(j>=(n+2)-k&&j<=(n-2)+k)
            printf(" ");
            else
            printf("o");


        }
printf("\n");
    }

   getch();
}
