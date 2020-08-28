#include<stdio.h>
main()
{
int a,b,i;
printf("Enter tow numbers:");
scanf("%d%d",&a,&b);
for(i=(a>b?a:b);1;i+=(a>b?a:b))
 {  if(i%a==0&&i%b==0)
{
    printf("LCM of %d and %d is %d",a,b,i);
    break;
}
 }
getch();

}
