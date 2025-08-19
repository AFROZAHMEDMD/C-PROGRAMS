#include<stdio.h>
main()
{
	int i,n;
	unsigned long long fact=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("%llu",fact);
}
