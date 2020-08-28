#include<stdio.h>
void main(void)
    {
        float p,c,m;
        char n[20];
printf("Enter name of candidate:");
gets(n);
fflush(stdin);
printf("Enter marks of \nPhysics:");
scanf("%f",&p);
printf("Chemistry:");
scanf("%f",&c);
printf("Maths:");
scanf("%f",&m);
if(p<40&&c>40&&m>40||p>40&&c<40&&m>40||p>40&&c>40&&m<40)
    printf("%s has Supplementary",n);
else if((p<40&&c<40&&m>40)||(p>40&&c<40&&m<40)||(p<40&&c>40&&m<40)||(p<40&&c<40&&m<40))
printf("%s is FAIL",n);

getch();
}
