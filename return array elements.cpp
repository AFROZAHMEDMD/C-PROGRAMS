#include<stdio.h>
#define l 5
int* fun(int a[])
{
	int i,temp;
	for(i=0;i<l/2;i++)
	{
		temp=a[i];
		a[i]=a[l-i-1];
		a[l-i-1]=temp;
	}
	return a;
}
main(){
	int a[l]={11,10,12,52,60};
	int *p=fun(a);
	for(int i=0;i<l;i++)
	printf("%d ",*(p+i));
}
