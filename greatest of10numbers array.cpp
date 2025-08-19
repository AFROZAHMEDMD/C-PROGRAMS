#include<stdio.h>
#define SIZE 5
main()
{
	int greatest,i,a[SIZE];
	printf("Enter num:");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
		greatest=a[0];
	for(i=1;i<SIZE;i++)
	{
		if(greatest<a[i])
		greatest=a[i];
	}
	for(i=1;i<SIZE;i++)
	printf("greatest=%d\n",a[i]);
}
