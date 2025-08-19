#include<stdio.h>
#define SIZE 6
void reverse(int a[]);
main()
{
	int a[SIZE],i;
	printf("Enter a element:");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse(a);
}
void reverse(int a[])
{
	int i,temp;
	for(i=0;i<SIZE/2;i++)
	{
		temp=a[i];
		a[i]=a[SIZE-i-1];
		a[SIZE-i-1]=temp;
	}
	for(i=0;i<SIZE;i++)
	printf("%d",a[i]);
}
