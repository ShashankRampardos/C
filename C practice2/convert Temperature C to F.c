main()
{
float f;

printf("Enter Temperature\n");
printf("  %c\r\b",248);
scanf("%f",&f);
printf("Temperature in Celsius is %.3f",(f-32)/1.8);
getch();
}
