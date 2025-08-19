// recursive function
#include<stdio.h>
int fact(int n)
{
	int r;
	if(n==0)
	r=1;
	else
	r=n*fact(n-1);
	return r;
}

main()
{
	int a=5;
	printf("%d",fact(a));
}
