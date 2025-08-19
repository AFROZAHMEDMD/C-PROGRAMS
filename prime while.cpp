#include<stdio.h>
main()
{
	int n=5,i=1,count=0;
	while(i<=n)
	{
		if(5%i==0)
		count++;
		i++;
	}

	if(count==2)
	{
		printf("prime");
	}
	else
	printf("not prime");
}
