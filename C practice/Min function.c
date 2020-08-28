min(int *a,short int n);
main()
{
    int a[100];
    short int n;
    short int i;

 printf("Input number of element to be stored in array:");
 scanf("%hd",&n);
     printf("Enter numbers in array:");
      for(i=0;i<n;i++)
        scanf("%d",a+i);
 printf("Smallest number is %d",min(a,n));
getch();
}
min(int *a,short int n)
{
    int min;
    short int i;
 min=*a;
  for(i=0;i<n;i++)
  {
      if(min>*(a+i))
        min=*(a+i);
  }
  return min;

}
