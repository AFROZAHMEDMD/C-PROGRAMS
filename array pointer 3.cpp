#include<stdio.h>
main()
{
	int x=5;
	float y=3.45;
	int *ptr=&x;
	float *ptr1=&y;
	printf("%u %d\n",ptr,*ptr);
	printf("%u %f\n",ptr1,*ptr1);
	*ptr=20;
	*ptr1=6.7;
	printf("%u %d\n",ptr,*ptr);
	printf("%u %f\n",ptr1,*ptr1);
}
