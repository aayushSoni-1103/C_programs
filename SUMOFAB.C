//wap to display the sum of two 3x3 matrices and store result in third
#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],sum[3][3];
int i,j;
clrscr();
//loop for getting the the values in matrix 1 from user
printf("Enter values of first matrix:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
//loop for getting the the values in matrix 2 from user
printf("Enter values of second matrix:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
//looop for defining sum=a+b
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum[i][j]=a[i][j]+b[i][j];
}
}
//displaying first matrix
printf("\nMatrix 1\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
//displaying second matrix
printf("\nMatrix 2\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
//displaying sum matrix
printf("\nSum of Matrices\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",sum[i][j]);
}
printf("\n");
}
getch();
}
