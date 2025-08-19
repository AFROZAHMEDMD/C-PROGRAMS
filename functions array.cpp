#include<stdio.h>
#define R 2
#define C 2
void add(int a[R][C],int b[R][C]);
main()
{
	int a[R][C],b[R][C],i,j;
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
		
add(a,b);
}
void add(int a[R][C],int b[R][C])
{
int i,j,c[R][C];	
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
