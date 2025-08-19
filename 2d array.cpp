#include<stdio.h>
main()
{
int a[50][50],i,j,R,C;
printf("Enter Row and Colomns ");
scanf("%d%d",&R,&C);
	printf("\nEnter element ");
for(i=0;i<R;i++)  
{
for(j=0;j<C;j++)  

{

scanf("%d",&a[i][j]);
}
}
printf("matrix is \n");
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	printf("%d ",a[i][j]);
	printf("\n");
}

}
