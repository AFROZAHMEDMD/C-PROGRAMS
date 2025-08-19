#include<stdio.h>
void x(int n);
main()
{
	int a[5],i;
	printf("enter element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<5;i++)
		x(a[i]);

}
	void x(int n)
	{
		n%2==0?printf("%d even\n",n):printf("%d odd\n",n);
	}
