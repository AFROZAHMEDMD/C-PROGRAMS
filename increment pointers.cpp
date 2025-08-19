#include<stdio.h>
main()
{
	int x=5,y=10;
	int *ptr=&x;
	printf("1.%u\n2.%d\n",ptr,*ptr);
	int z=*ptr++;
	printf("3.%d\n4.%u\n5.%u\n",z,ptr,*ptr);
	z=(*ptr)++;
	printf("6.%d\n7.%d\n",z,*ptr);
	z=*++ptr;
	printf("8.%d\n9.%d",z,*ptr);
	
}
