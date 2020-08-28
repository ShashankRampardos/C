#include<stdio.h>
main()
{
    int cid;
    float unit,bill;
    char name[20];
    printf("Enter ID of customer:");
    scanf("%d",&cid);
    fflush(stdin);
    printf("Enter Customer Name:");
    gets(name);
    printf("Enter Unit consumed by customer:");
    scanf("%f",&unit);
    if(unit<=199)
    {
        bill=unit*1.20;
        if(bill<200)
            bill=200;
    }
    if(unit>=200&&unit<400)
        bill=unit*1.50;
    if(unit>=400&&unit<600)
        bill=unit*1.80;
    if(unit>600)
        bill=unit*2.00;
    if(bill>400)
       bill=bill+(bill*15/400);
       printf("Customer ID:%d\n",cid);
       printf("Customer Name:%s\n",name);
       printf("Customer Electricity bill:%.2f\n",bill);
}
