#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5},i;
	int *ptr;
	int (*ptr1)[5];
	ptr=a;
	ptr1=&a;
	printf("%u %u\n",ptr,ptr1);
	ptr++;
	ptr1++;
	printf("%u %u \n",ptr,ptr1);
}
