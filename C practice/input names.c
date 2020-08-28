void main(void)
{
    char **a,name[30];
    short l,n;
    short i;
    printf("Enter how many names you want to enter:");
   scanf("%hi",&n);
   a=(char**)malloc((n+1)*sizeof(char*));
    printf("Enter %d names\n",n);
    for(i=0;i<=n;i++){
    gets(name);
    l=strlen(name);
    *(a+i)=(char*)malloc(sizeof(char)*(l+1));
    strcpy(a[i],name);
}
printf("Names you entered:\n");
for(i=0;i<=n;i++)
{
    printf("%s\n",*(a+i));
}
getch();
}
