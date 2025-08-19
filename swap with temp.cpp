#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter a,b: ");
	scanf("%d %d",&a,&b);
	printf("before swapping a=%d\tb=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a=%d\tb=%d",a,b);
}
