void ispalindrome(char *a,char *preva)
{
    if(strcmpi(a,preva)==0)
        printf("It is a Palindrome.");
    else
        printf("It is not a Palindrome.");
}
void main(void)
{
    char i,swap,j;
    char a[30],preva[30];
    printf("Enter your word or sentence: ");
    scanf("%[^\n]s",a);
     strcpy(preva,a);
     for(i=0,j=strlen(a)-1;i<strlen(a)/2;i++,j--)
     {    swap=a[i];
          a[i]=a[j];
          a[j]=swap;
     }
     printf("\n%s\n",a);
     ispalindrome(a,preva);



}
