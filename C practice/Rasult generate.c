#include<stdio.h>
void main(void)
    {   char r[7];
        float p,c,m,per,tot;
        int s=0,pa,g=0,sel;
        char n[20];

start:
printf("Enter name of candidate:");
gets(n);
fflush(stdin);
printf("Enter Roll number of candidate:");
gets(r);
fflush(stdin);
printf("Enter marks of \nPhysics:");
scanf("%f",&p);
printf("Chemistry:");
scanf("%f",&c);
printf("Maths:");
scanf("%f",&m);
if(p<40&&c>40&&m>40||p>40&&c<40&&m>40||p>40&&c>40&&m<40)
{
 if(p<40)
 {
     p+=3;
     if(p>=40)
     g=1;
     else
        s=1;
 }
 if(c<40)
 {
      c+=3;
      if(c>=40)
        g=1;
      else
        s=1;
 }
 if(m<40)
 {
     m+=3;
     if(m>=40)
        g=1;
     else
        s=1;
 }

}
else if((p<40&&c<40&&m>40)||(p>40&&c<40&&m<40)||(p<40&&c>40&&m<40)||(p<40&&c<40&&m<40))
pa=0;
else
    pa=1;
tot=m+p+c;
per=tot/300*100;
printf("\t\tMaharishi Arvind Institute of Science and management\n");
printf("Roll No:-%s\n",r);
printf("-------------------------------------------------------------------------------------------------\n");
printf("Subject  \t\tMax Marks\t\tMin Marks\t\tMarks Obtained\n");
printf("Physics  \t\t  100    \t\t   40     \t\t  %.2f  \n",m);
printf("Chemistry\t\t  100    \t\t   40     \t\t  %.2f  \n",p);
printf("Total:%.2f\t\tPercentage:%.2f%%\n",tot,per);
if(s)
    printf("Result:Supplementary\n");
if(g)
    printf("Result:Pass with grace\n");
if(pa==1)
    printf("Result:Pass\n");
if(pa==0)
    printf("Result:Fail\n");
printf("--------------------------------------------------------------------------------------------------\n");
bottom:
printf("\nDo you want to continue(1/0):");
scanf("%d",&sel);
fflush(stdin);
if(sel==1)
{
    getch();
    system("cls");
    goto start;
}
if(sel==0)
{
    getch();
    exit(0);
}
else
{   printf("Enter 1 or 0");
    getch();
    system("cls");
    goto bottom;
}
getch();
}
