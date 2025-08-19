#include<stdio.h>
main()
{
	int n,a,i=0,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter number:");
		scanf("%d",&a);
		if(a<0)
		{
			printf("entered -ve number\n");
			continue;
		}
		sum=sum+a;
		i++;
	}
	float avg=sum/n;
	printf("%f",avg);
}
