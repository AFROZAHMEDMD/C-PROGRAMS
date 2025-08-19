#include<stdio.h>
#define SIZE 5
void po(int n[]);
main()
{
	int n[SIZE],i;
	printf("enter n:");
	for(i=0;i<SIZE;i++)
	{
	scanf("%d",&n[i]);
	}
	po(n);
}
void po(int n[])
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		if(n[i]>0)
		{
		printf("%d is positive\n",n[i]);
		}
		else if(n[i]<0)
		{
		printf("%d is negative\n",n[i]);
		}
		else
		printf("%d is zero\n",n[i]);
	}
	
}
