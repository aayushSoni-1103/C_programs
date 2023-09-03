#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,m[3][3],t[3][3];
clrscr();
printf("Enter values for first matrix:");
//loop for getting the values of matrix (m)
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&m[i][j]);
}
}
//loop for transposing the matrix
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
t[j][i]=m[i][j];
}
//loop for displaying the original m matrix
printf("\nBefore Transpose of a Matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",m[i][j]);
}
printf("\n");
}
//loop for displaying transposed matrix
printf("\nTranspose Matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",t[i][j]);
}
printf("\n");
}
getch();
}