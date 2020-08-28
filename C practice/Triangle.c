#include<windows.h>
main()
{
  int b,h,s3,select;
  start:

  printf("\n1 Area of Triangle");
  printf("\n2 Perimeter of Triangle");
  printf("\nEnter your selection");
  scanf("%d",&select);
  switch(select)
  {
  case 1:

    printf("\nEnter Base value:");
    scanf("%d",&b);
    printf("\nEnter Height value:");
    scanf("%d",&h);
    printf("\nArea of Triangle is %.2f",1.0/2*b*h);
  break;
  case 2:

    printf("\nEnter Three sides value");
    scanf("%d%d%d",&b,&h,&s3);
    printf("\nPerimeter of triangle is %d",b+h+s3);
  break;
  default:

    printf("\nInvalid selection");
    getch();
    system("cls");
    goto start;
  }
  middle:
  getch();
  printf("\nDo you want to continue(1/0)");
  scanf("%d",&select);
  if(select==1)
    {getch();
     system("cls");
        goto start;}
  else if(select>1||select<0)
    {printf("Invalid selection");
     goto middle;}
  else
        exit(0);
getch();

}
















