//wap for the implementation of sparse matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=0,size=0,spMATRIX[3][10];
int array[4][5]={{0,1,2,3,0},{1,0,2,0,3},{1,0,0,0,0},{0,1,1,1,1}};
//
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
if(array[i][j]!=0)
++size;
}
}
//
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
if(array[i][j]!=0)
{
spMATRIX[0][k]=i;
spMATRIX[1][k]=j;
spMATRIX[2][k]=array[i][j];
k++;
}
}
}
//printing the final matrix
printf("<--Final Matrix-->\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",spMATRIX[i][j]);
}
printf("\n");
}
getch();
}