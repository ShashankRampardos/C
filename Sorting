#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
min(float*,short int,short int*);
main()
{
    float *a,*sorted,swap;
    short int n,cpy_n;
    short int i,j,location=0;

 printf("Input number of element to be stored in array:");
 scanf("%hd",&n);
 a=(float *)calloc(n,sizeof(float));//DMA array "a" to store elements in it.
 sorted=(float *)calloc(n,sizeof(float));//DMA array "sorted" to store sorted elements of "a" array
 cpy_n=n;//copy n value in copy of n for backup in case n will manipulated.
     printf("Enter numbers in array:");
      for(i=0;i<n;i++)//input in array "a"
        scanf("%f",a+i);

 for(i=0;n!=0;i++)//-----------------------------------------------------
  {//                                                                    |
   min(a,n,&location);//it will give location of smallest value          |
//                                                                       |
  *(sorted+i)=*(a+location);//smallest value of array a in array "sorted"|
  swap=*(a+location);//--------                                          | Ascending sorting logic
  *(a+location)=*(a+(n-1));//  |swap smallest value location and         |
  *(a+(n-1))=swap; //---------- Nth location value                       |
  free(a+n-1);//delete last element                                                         |
  n--;//decrease number of array element (indirectly delete last element |
 // array)                                                               |
 }//---------------------------------------------------------------------

free(a);//Destroy array "a"
    printf("Array after shorting:");

      for(i=0;i<cpy_n;i++)//print array "sorted" data (sorted one)
         printf(" %.3f",*(sorted+i));
free(sorted);//Destroy array "sorted"
getch();
}
min(float *a,short int n,short int *location)//take address of 0th element of array "a",
// n value, location variable address
{
    float min;
    short int i;
    char flag=1;
 min=*a;
  for(i=0;i<n;i++)
  {
      if(min>*(a+i)){
        min=*(a+i);
        *location=i;
        flag=0;
      }
      else if(flag)//in no element location found smaller than min then location
        *location=0;//will be 0 instead of previous location.
  }
}
//EXAMPLE:-
//we have 3 0 5 1 4 2
//first smallest number will assigned in array "sorted", 0 is smallest here.
//then 0 will and last element of array "a" swapped.
//like 3 2 5 1 4 0, number of elements are 6.
//then last element of array "a" will be destroyed.
//we get 3 2 5 1 4, number of elements are 5.
//same process will be done until all elements stored in array "sorted" in Ascending order
//and all elements of array "a" will be destroyed.
// when all elements of array "a" will destroyed then print array "sorted " elements
//destroy array "sorted" elements or memory allocation.












