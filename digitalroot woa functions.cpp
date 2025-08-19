//with return type and without arguments
#include<stdio.h>
int digitalroot();
main()
{
	printf("sum of integers is %d",digitalroot());
}
int digitalroot()
{
	int a,d;
	printf("enter:");
	scanf("%d",&a);
	d=1+(a-1)%9;
	return d;
}
