#include<stdio.h>
main()
{
	int x=5;
	int *ptr=&x;
	int **ptr1=&ptr;
	printf("%u %d %u %u %d\n",ptr,*ptr,ptr1,*ptr1,**ptr1);
}
