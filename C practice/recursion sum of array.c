#include<stdio.h>
#include<conio.h>
int arraysum(int*,int,char,int);
void main(void)
{
    int a[10];
    char i,n;
    printf("Enter number of elements to be stored in array:");
    scanf("%hi",&n);
    printf("Enter numbers in array:");
    for(i=0;i<n;i++)
    scanf("%d",a+i);

    printf("Sum of given array:%d",arraysum(a,0,n,0));

}
int arraysum(int *a,int i,char n,int sum)
{
    if(i==n)
      return sum;

sum=sum+a[i];

i++;
 arraysum(a,i,n,sum);

}
