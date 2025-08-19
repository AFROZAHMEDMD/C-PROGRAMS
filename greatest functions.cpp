#include<stdio.h>
int greatest(int a,int b)
{
	return a>b?a:b;
}
main()
{
	int x=55,y=10;
	printf("%d",greatest(x,y));
}
