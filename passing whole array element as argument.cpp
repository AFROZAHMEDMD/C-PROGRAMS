#include<stdio.h>
#define SIZE 5
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
main()
{
	int a[SIZE],i;
	printf("enter element:");
	for(i=0;i<SIZE;i++){
		scanf("%d",&a[i]);
	}
	reverse(a);
}
