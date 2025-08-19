#include<stdio.h>
static int i=1;
void dis()
{
	printf("%d\n",i);
	i++;
}
main()
{
	dis();
	dis();
	dis();
}
