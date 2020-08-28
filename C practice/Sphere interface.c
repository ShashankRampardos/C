#define pi 3.14
#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
  int sel,r;
start:
  system("cls");
  printf("\n1 Area of Sphere");
  printf("\n2 Perimeter of Sphere");
  printf("\n3 Volume of Sphere");
  printf("\n4 Exit");
  scanf("%d",&sel);


  switch(sel)
  {
  case 1:
        printf("\nEnter radius:");
        scanf("%d",&r);
        printf("Surface Area of Sphere is %.2f",4*pi*r*r);
   break;
  case 2:
      printf("\nEnter radius:");
      scanf("%d",&r);
      printf("Circumference of Sphere is %.2f",2*pi*r);
   break;
  case 3:
      printf("\nEnter radius:");
      scanf("%d",&r);
      printf("Volume of Sphere is %.2f",4.0/3*pi*r*r*r);
   break;
  case 4:
      exit(0);
      break;
  default:
     system("cls");
     getch();
    printf("Invalid selection");
    getch();
    goto start;
  }
bottom:
  printf("\nDo you want to continue(1/0):");
  scanf("%d",&sel);
  if(sel==1)
    goto start;
  else if (sel>1||sel<0)
  {
      printf("Choose 1 or 0");
      getch();
      system("cls");
      goto bottom;
  }
  else
    exit(0);
getch();
}

