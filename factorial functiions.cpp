//with return type and with arguments

#include<stdio.h>
int factorial(int);
main()
{
	int n;
	printf("enter");
	scanf("%d",&n);
	factorial(n);
	//printf("%d",c);
}
int factorial(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	f=f*i;
	return f;
}
