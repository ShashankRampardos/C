#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void freee(int *a,short num)
{
    char i;
    for(i=0;i<num;i++)
        free((a+i));
}
main()
{
    int *a,*b;
    char i,j;
    short count,n;
    printf("Program to check frequency of array elements\n");
    printf("---------------------------------------------\n");
    printf("Enter number of elements to be stored in array:");
    scanf("%d",&n);
    a=(int*)calloc(n,4);
    b=(int*)calloc(n,4);
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
        *(b+i)=-1;
    }
    for(i=0;i<n;i++)
    {  count=1;
        for(j=i+1;j<n;j++)
          {  if(*(b+i)!=0)
              if(*(a+i)==*(a+j))
                {
                    ++count;
                    *(b+j)=0;
                }
          }if(*(b+i)!=0)
           printf("%d occurred ->%hi times\n",*(a+i),count);
    }
    getch();
free(a);
free(b);
printf("%d",*a);

}
