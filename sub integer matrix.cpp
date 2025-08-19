#include<stdio.h>
main()
{
	int a[20][20],b[20][20],c[20][20],i,j,R,C;
	printf("enter row and colmun:");
	scanf("%d%d",&R,&C);
	printf("read matrix:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			
		}
		
	}
	
	printf("read matrix 2:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d ",c[i][j]);
			
		}
		printf("\n");
	}
}
