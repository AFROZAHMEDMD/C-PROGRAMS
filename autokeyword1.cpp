#include<stdio.h>
void dis()
{
	int x;
	printf("%d\n",x);
	
}
main()
{
	auto int x=100;
	printf("%d\n",x);
	{
		auto int x=200;
		printf("%d\n",x);
	}
	printf("%d\n",x);
	dis();
}
