#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		printf("%d ",sum);
	}
	printf("\n%d",sum);
}
