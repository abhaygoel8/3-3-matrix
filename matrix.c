include<stdio.h>
void main ()
{
int arr[3][3],i,j;
for(i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("enter a[%d][%d]:",i,j);
scanf("%d",&arr[i][j]);
}
}
printf("\n printing the element....\n");
for(i=0;i<3;i++)
{
printf("\n");
for (j=0;j<3;j++)
{
printf("%d\t",arr[i][j]);
}
}
}
