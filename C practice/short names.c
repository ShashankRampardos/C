#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<string.h>
void strsort(char **a,short n)
{
    short i,j;
    char *swap;
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        if(strcmpi(*(a+i),*(a+j))>0)
        {
            swap=*(a+i);
          *(a+i)=*(a+j);
          *(a+j)=swap;
        }
    }
}
void main(void)
{
    char **a,name[30];
    short i,n,l;
 printf("Sort names in ascending order\n");
 printf("-----------------------------\n");
    printf("Enter how many names you want to input:");
    scanf("%hi",&n);
    a=(char**)calloc((n+1),sizeof(char*));
    printf("\nEnter %d names to sort them:\n",n);
    for(i=0;i<=n;i++)
    {
        gets(name);
        l=strlen(name);
        *(a+i)=(char*)calloc(l+1,sizeof(char));
        strcpy(*(a+i),name);
    }
    strsort(a,n);
    printf("Names after sorting:\n");
    for(i=0;i<=n;i++)
    {
        printf("%s\n",*(a+i));
    }
}
