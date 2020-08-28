main()
{
    int *a;
    short int count=0;
    short int i,j,n;
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
      if(count>n/2){
            printf("%d is a Majority element of array",a[i]);
          break;
         }
    }
      if(j==n)
        printf("There is no majority element in this array");

}
