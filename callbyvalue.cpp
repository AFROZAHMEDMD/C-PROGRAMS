#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swapping a=%d b=%d\n",a,b);
}
main()
{
	int a=5,b=4;
	printf("before swapping: a=%d b=%d\n",a,b);
	swap(a,b);
	printf("a=%d b=%d",a,b);
}
