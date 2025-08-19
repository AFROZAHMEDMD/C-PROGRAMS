#include<stdio.h>
main()
{
	int x=5;
	float y=3.45;
	void *ptr=&x;
	printf("%d\n",*(int*)ptr);
	ptr=&y;
	printf("%f\n",*(float*)ptr);
}
