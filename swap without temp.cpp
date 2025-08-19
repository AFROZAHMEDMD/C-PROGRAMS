#include<stdio.h>
main()
{
	int a,b;
	printf("enter a,b: ");
	scanf("%d %d",&a,&b);
	printf("before swapping a=%d\tb=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d\tb=%d",a,b);
}
