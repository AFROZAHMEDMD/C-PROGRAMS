#include<stdio.h>
main()
{
	int i,a;
	printf("enter number:");
	scanf("%d",&a);
	for(i=a;i>=0;i--)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
