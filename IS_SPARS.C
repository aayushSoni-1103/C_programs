//prgrm to check whether a matrix is sparse or not
#include<stdio.h>
#include<conio.h>
void main()
{
int matrix[3][3],sCount=0;
int i,j;
//loop for entering values in MATRIX
printf("Enter Values for the matrix you want to check:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&matrix[i][j]);
//loop for counting zeroes
if(matrix[i][j]==0)
++sCount;
}
}
//loop for knowing the matrix is sparse or not
if(sCount>(9/2))
printf("--Sparse Matrix--");
else
printf("--Not a Sparse Matrix--");

printf("\nTotal number of zeroes are:%d",sCount);
getch();
}
