#include<stdio.h>
#include<conio.h>
int arrayprint(int*,int,char);
void main(void)
{
    int a[10];
    char i,n;
    printf("Enter number of elements to be stored in array:");
    scanf("%hi",&n);
    printf("Enter numbers in array:");
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    printf("Output of entered array:");
    arrayprint(a,0,n);
}
int arrayprint(int *a,int i,char n)
{
    if(i==n)
      return;

    printf("% 2d",*(a+i));
i++;
arrayprint(a,i,n);


}
