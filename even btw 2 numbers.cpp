#include<stdio.h>
main()
{
	int i,a,b;
	
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	for(i=a+1;i<=b;i++)
	{
		if(i%2==0)
		printf("%d  \n",i);
	}
}
