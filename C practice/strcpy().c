#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
strcopy(char *a,char *b,short len)
{
    short i,j;
    for(i=0;i<len;i++)
    {
        *(b+i)=*(a+i);
    }
}
void main(void)
{
   char a[100],b[100];
   short i;
   printf("Enter a string:");
   gets(a);
  // scanf("%[^\n]s",a);
   for(i=0;a[i]!='\0';i++);
   strcopy(a,b,i);
   printf("String copied in another string:");
   puts(b);
   getch();
}
