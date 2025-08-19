#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("after swapping a=%d b=%d\n",*p,*q);
}
main()
{
	int a=5,b=4;
	printf("before swapping: a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d b=%d",a,b);
}
