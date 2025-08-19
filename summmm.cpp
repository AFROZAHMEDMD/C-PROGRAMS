#include<stdio.h>
main()
{
	int n,r,sum=0,temp;
	printf("enter:");
	scanf("%d",&n);
	
		while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n/=10;
	}
	printf("%d",sum);
	while(sum>9)
	{
		temp=sum;
		sum=0;
		while(temp>0)
	{
		r=temp%10;
		sum=sum+r;
		temp/=10;
	}	
		
	}
	printf("\n%d",sum);
	
}
