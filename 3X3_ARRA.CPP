#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m[3][3];
clrscr();
printf("Enter values;");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
scanf("%d",&m[i][j]);
}
printf("\nOutput:");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
printf("\n%d",m[i][j]);
}
printf("\n");
getch();
}
