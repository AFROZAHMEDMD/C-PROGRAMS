#include<stdio.h>
main()
{
	int i,n,x;
	printf("enter nand x: ");
	scanf("%d %d",&n,&x);
	for(i=1;i<=x;i++)
	printf("%d*%d=%d\n",n,i,n*i);
}
