main()
{
    int *a;
    short int count=0;
    short int i,j,n;
    char flag=0;
    printf("Enter number of elements to be stored in array:");
    scanf("%hi",&n);
    a=(int *)calloc(n,sizeof(int));
    printf("Enter elements in array\n");
    for(i=0;i<n;i++){
            printf("[%d]:",i+1);
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++){
            count=0;
       for(j=0;j<n;j++)
          if(*(a+i)==*(a+j))
          count++;
      if(count%2==1){
            printf("\nThe element occurred odd number of time is %d",a[i]);
         flag=1;
         }
    }
      if(!flag)
        printf("There is no element which is occurred odd number of times");

}
