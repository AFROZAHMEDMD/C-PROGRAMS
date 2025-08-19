#include<stdio.h>
main()
{
	int i=1,n;
	printf("enter:");
	scanf("%d",&n);
	while(i<=n)
	{

		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}
}
