//with return type and without arguments
#include<stdio.h>
int fact();
main()
{
	printf("%d",fact());
	
}
int fact()
{
	int n,f=1,i;
	printf("Enter:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f*=i;
	return f;
}
