#include <stdio.h>
void DMA_but_Static(int);
int main()
{
   int n;
   printf("enter strength of array:");
   scanf("%d",&n);
   DMA_but_Static(n);
}
void DMA_but_Static(int n)
{
    int a[n];
    int i;
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    for(i=0;i<n;i++)
    printf("% 3d",*(a+i));
}
