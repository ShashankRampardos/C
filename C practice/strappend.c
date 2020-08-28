#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
    char a[]="gut",*p;
    char b[]=",but";
    char c[]="ut";
    printf("%s\n",strcat(a,b));
printf("occurrence of %s in %s is %s\n",c,a,strstr(a,c));
}
