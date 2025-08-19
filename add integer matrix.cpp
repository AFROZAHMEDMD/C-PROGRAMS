#include<stdio.h>
main()
{
	int a[20][20],b[20][20],c[20][20],i,j,R,C;
	printf("Enter Row and Columns ");
	scanf("%d%d",&R,&C);
	printf("Read matrix1 \n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Read matrix2 \n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("Enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);			
		}
	}
		printf("addition matrix1 and matrix2 is  \n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		printf("%d ",c[i][j]);
					}
		printf("\n");
	}	
}

