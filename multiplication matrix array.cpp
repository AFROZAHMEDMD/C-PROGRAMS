
#include<stdio.h>
main()
{
	int a[20][20],b[20][20],c[20][20],i,j,k,R1,C1,R2,C2;
	printf("Enter Row and Columns for matrix 1: ");
	scanf("%d%d",&R1,&C1);
	printf("Read matrix1 \n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("Enter Row and Columns for matrix2:");
	scanf("%d%d",&R2,&C2);
	printf("Read matrix2 \n");
	for(i=0;i<R2;i++)
	{
		for(j=0;j<C2;j++)
		{
			printf("Enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);			
		}
	}
	if(C1==R2){
		printf("Multpliaction possible \n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
		{
			c[i][j]=0;
			
		for(k=0;k<C1;k++)
		{
			c[i][j]+=a[i][k]*b[k][j];  // c[0][0]=0+1*1  c[0][0]=1
			
		}
		printf("%d ",c[i][j]);	
		
							}
		printf("\n");
	}	
}

else
printf("Multiplication not possible");
}
