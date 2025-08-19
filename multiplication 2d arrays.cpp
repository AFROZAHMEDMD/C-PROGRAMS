#include<stdio.h>
main()
{
	int a[20][20],b[20][20],c[20][20],i,j,k,R1,R2,C1,C2;
	printf("enter ROW and COLUMN:");
	scanf("%d %d",&R1,&C1);
	printf("Enter Matrix1:");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter ROW and COLUMN:");
	scanf("%d %d",&R2,&C2);
	printf("Enter Matrix2:");
	for(i=0;i<R2;i++)
	{
		for(j=0;j<C2;j++)
		{
			printf("enter b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}	
	if(R2==C1){
		printf("Multiplication possible");
		for(i=0;i<R1;i++)
		{
			for(j=0;j<C2;j++)
			{
				c[i][j]=0;
				for(k=0;k<C1;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
				printf("%d\n",c[i][j]);
				
			}
		}
		
	}else
	printf("not possible");

}
