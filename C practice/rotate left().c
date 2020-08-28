void rotate_left(int *a,short time,short size)
{
    char i,j;
    int temp;
    while(time){
    temp=*a;
    for(i=0;i<size-1;i++)
      *(a+i)=*(a+(i+1));
    *(a+(size-1))=temp;
    time--;
    }

}
void main(void)
{
int *a;
char i,j;
short n,place;
printf("Enter number of elements to be stored in array:");
scanf("%hi",&n);
a=(int*)calloc(n,4);
printf("Enter Elements in array:\n");
for(i=0;i<n;i++){
    printf("[%d]:",i+1);
    scanf("%d",(a+i));
}
printf("Enter location to rotate array from:");
scanf("%hi",&place);
rotate_left(a,(place-1),n);
printf("Array after rotation:");
for(i=0;i<n;i++)
    printf("% 3d",*(a+i));
getch();
free(a);
}
