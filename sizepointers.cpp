#include<stdio.h>
main()
{
	int *p;
	float *p1;
	char *p2;
	char *p3;
	printf("%u %u %u %u %u %u %u %u",sizeof(p),sizeof(p1),sizeof(p2),sizeof(p3),sizeof(*p),sizeof(*p1),sizeof(*p2),sizeof(*p3));
}
