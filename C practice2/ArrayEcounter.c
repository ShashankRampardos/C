main()
{
    int a[100],temp,helper;
    short int n;
    short int i,j,k,count=0;

  printf("Input number of element to be stored in array:");
  scanf("%hd",&n);
  printf("Enter numbers in array:");
  for(j=0;j<n;j++)
  scanf("%d",a+j);

  while(n!=0)
  {
      helper=*(a+0);
      if(k==helper)
        i=1;
      else{
        count=0;printf("\n");}
      for(j=0;j<n;j++){
            if(helper==*(a+(j-1)))
            j--;

           if(helper==*(a+j)){
            count++;
           temp=*(a+(n-1));
           *((n-1)+a)=*(j+a);
           *(j+a)=temp;
            n--;
          }
      }

      k=helper;

     if(i)
     printf("\r");
      printf("Frequency of %d is %hd",helper,count);
}

     getch();
}
