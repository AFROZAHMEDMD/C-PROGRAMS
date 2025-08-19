#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("enter:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n/=10;
	}
	printf("%d",sum);
}
