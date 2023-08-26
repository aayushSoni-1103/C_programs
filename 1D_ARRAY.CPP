#include<stdio.h>
#include<conio.h>
void main()
{
int a1[5];
clrscr();
printf("Enter Five values of Array:");
for(int i=0;i<5;i++)
{
scanf("%d",&a1[i]);
}
printf("Output\n");
for(i=0;i<5;i++)
{
printf("%d\n",a1[i]);
}
getch();
}